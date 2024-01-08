#include "ft_printf.h"

void	ft_format_type(char format, va_list args, int *ptr_char_count)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), ptr_char_count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), ptr_char_count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), ptr_char_count);
	else if (format == 'p')
		ft_putptr(va_arg(args, void *), ptr_char_count);
	else if (format == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), ptr_char_count);
	else if (format == 'x')
		ft_putnbr_hex(va_arg(args, int), 0, ptr_char_count);
	else if (format == 'X')
		ft_putnbr_hex(va_arg(args, int), 1, ptr_char_count);
	else if (format == '%')
		ft_putchar('%', ptr_char_count);
	return ;
}