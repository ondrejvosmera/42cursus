/*
** ft_putnbr_fd
** Outputs the integer ’n’ to the given file descriptor
*/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    *str;
    int     i;

    str = ft_itoa(n);
    i = 0;
    while(str[i] != '\0')
    {
        write(fd, &str[i], 1);
        i++;
    }
}

/*  
int main()
{
    int num = -42;
    int fd = 1;

    ft_putnbr_fd(num, fd);

    return 0;
}
 */