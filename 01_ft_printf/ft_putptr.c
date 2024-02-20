/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:58:14 by ovosmera          #+#    #+#             */
/*   Updated: 2024/02/20 12:38:49 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long n, int *ptr_char_count)
{
	char	hex_digits[17];

	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	if (n >= 16)
	{
		ft_print_hex(n / 16, ptr_char_count);
	}
	ft_putchar(hex_digits[n % 16], ptr_char_count);
}

void	ft_putptr(void *ptr, int *ptr_char_count)
{
	unsigned long	address;

	if (ptr == NULL)
	{
		ft_putstr("(nil)", ptr_char_count);
		return ;
	}
	else
	{
		address = (unsigned long) ptr;
		ft_putstr("0x", ptr_char_count);
		ft_print_hex(address, ptr_char_count);
	}
}
