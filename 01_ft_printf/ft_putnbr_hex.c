#include "ft_printf.h"

void ft_putnbr_hex(unsigned int n, char uppercase, int *ptr_char_count)
{
    char base[17];

    if (uppercase)
    {
        ft_strlcpy(base, "0123456789ABCDEF", 17);
    }
    else
    {
        ft_strlcpy(base, "0123456789abcdef", 17);
    }

    if (n > 15)
    {
        ft_putnbr_hex(n / 16, uppercase, ptr_char_count);
        ft_putnbr_hex(n % 16, uppercase, ptr_char_count);
    }
    else
        ft_putchar(base[n], ptr_char_count);
}
