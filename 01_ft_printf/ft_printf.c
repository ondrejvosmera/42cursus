#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int     chars_printed;
    int     *ptr_chars_printed;

    chars_printed = 0;
    ptr_chars_printed = &chars_printed;
    va_start(args, format);

    while(*format != '\0')
    {
        if (format == '%')
        {
            format++;
        }
    }
}