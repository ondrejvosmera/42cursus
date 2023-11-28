#include "ft_printf.h"

void    ft_putnbr(int n, int *ptr_char_count)
{
    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*ptr_char_count += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', ptr_char_count);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, ptr_char_count);
	}
	ft_putchar(n % 10 + '0', ptr_char_count);
}