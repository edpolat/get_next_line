/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpolat <edpolat@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:35:06 by edpolat           #+#    #+#             */
/*   Updated: 2026/02/03 19:17:43 by edpolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*line_here(char *remainder)
{
	int		i;
	char	*line;

	i = 0;
	if (!remainder || remainder[0] == '\0')
		return (NULL);
	while (remainder[i] && remainder[i] != '\n')
		i++;
	if (remainder[i] == '\n')
		i++;
	line = ft_substr(remainder, 0, i);
	return (line);
}

char	*nextline(char *remainder)
{
	int		i;
	char	*new;
	char	*endpoint;

	endpoint = ft_strchr(remainder, '\n');
	if (!endpoint)
	{
		free(remainder);
		return (NULL);
	}
	new = malloc(ft_strlen(endpoint + 1) + 1);
	if (!new)
		return (NULL);
	i = 1;
	while (endpoint[i])
	{
		new[i - 1] = endpoint[i];
		i++;
	}
	new[i - 1] = 0;
	free(remainder);
	return (new);
}

char	*get_next_line(int fd)
{
	ssize_t		bytes_read;
	char		*buffer;
	char		*line;
	static char	*remainder;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	bytes_read = 1;
	if (!buffer || fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while ((!remainder || !ft_strchr(remainder, '\n')) && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		remainder = ft_strjoin_f(remainder, buffer);
	}
	free(buffer);
	if (!remainder || remainder[0] == '\0')
		return (free(remainder), remainder = NULL, NULL);
	line = line_here(remainder);
	remainder = nextline(remainder);
	return (line);
}

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("deneme.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
