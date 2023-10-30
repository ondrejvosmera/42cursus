/*
** ft_putchar_fd
** Outputs the character ’c’ to the given file descriptor
*/

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* 
int main()
{
    char character = 'A';
    int fd = 1;

    ft_putchar_fd(character, fd);

    return 0;
}
 */