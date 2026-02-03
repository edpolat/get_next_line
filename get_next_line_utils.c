/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpolat <edpolat@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:35:06 by edpolat           #+#    #+#             */
/*   Updated: 2026/02/03 19:07:44 by edpolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = ft_strlen(s);
	cpy = malloc((sizeof(char)) * (i + 1));
	j = 0;
	if (!cpy)
		return (NULL);
	while (j < i)
	{
		cpy[j] = s[j];
		j++;
	}
	cpy[j] = 0;
	return (cpy);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}

char	*ft_strjoin_f(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*join;

	k = 0;
	if (!s1)
		return (ft_strdup(s2));
	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	while (k < ft_strlen(s1) + ft_strlen(s2))
	{
		while (k < ft_strlen(s1))
		{
			join[k] = s1[k];
			k++;
		}
		join[k] = s2[k - ft_strlen(s1)];
		k++;
	}
	join[k] = 0;
	free(s1);
	return (join);
}

char	*ft_strchr(char *s, int c)
{
	size_t	j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == (char)c)
			return ((char *)&s[j]);
		j++;
	}
	if ((char)c == '\0')
		return ((char *)&s[j]);
	return (NULL);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
