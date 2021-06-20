#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
char	*ft_substr (char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin (char const *s1, char const *s2);
size_t	ft_strlen (const char *str);
int		get_next_line(int fd, char **line);
#endif
