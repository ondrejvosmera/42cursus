#include "ft_printf.h"

void    ft_putnbr_unsigned(unsigned int n, int *ptr_char_count)
{
    if (n >= 10)
	{
		ft_putnbr(n / 10, ptr_char_count);
	}
	ft_putchar(n % 10 + '0', ptr_char_count);
}