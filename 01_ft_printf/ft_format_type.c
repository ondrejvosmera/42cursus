#include "ft_printf.h"

void	ft_format_type(char format, va_list args, int *ptr_char_count)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), ptr_char_count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), ptr_char_count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), ptr_char_count);
}