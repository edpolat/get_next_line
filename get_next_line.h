#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin_f(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*line_here(char *remainder);
char	*nextline(char *remainder);
char	*get_next_line(int fd);
#endif