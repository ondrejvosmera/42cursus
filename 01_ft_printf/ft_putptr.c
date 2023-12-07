#include "ft_printf.h"

void    ft_print_hex(unsigned long n, int *ptr_char_count)
{
    char    hex_digits[] = "0123456789abcdef";

    if (n >= 16)
    {
        ft_print_hex(n / 16, ptr_char_count);
    }
    ft_putchar(hex_digits[n % 16], ptr_char_count);
}

void    ft_putptr(void *ptr, int *ptr_char_count)
{
    unsigned long   address;

    address = (unsigned long) ptr;
    ft_putstr("0x", ptr_char_count);
    ft_print_hex(address, ptr_char_count);
}