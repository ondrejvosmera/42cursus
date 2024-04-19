#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
size_t  ft_strlen(const char *str);
void    *ft_calloc(size_t num, size_t size);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);


#endif
