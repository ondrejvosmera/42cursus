/*
** ft_itoa
** Allocates and returns a string representing the integer
** received as an argument. Negative numbers must be handled
*/

#include "libft.h"

int num_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
        len++;
    else if (n == 0)
        return (1);
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char        *str;
    int         len;
    long long   num;
    
    num = n;
    len = num_len(n);
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    if (num < 0)
    {
        num = num * (-1);
        str[0] = '-';
    }
    else if (num == 0)
        str[0] = '0';
    str[len] = '\0'; 
    while (num != 0)
    {
        str[--len] = num % 10 + '0';
        num = num / 10;
    }
    return (str);
}

/* 
#include <stdio.h>

int main()
{
    int num = -42;
    char *result = ft_itoa(num);
    printf("Number: %d\n", num);
    printf("After ft_itoa: %s\n", result);
}
 */