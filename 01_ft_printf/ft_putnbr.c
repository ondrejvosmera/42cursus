/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:57:57 by ovosmera          #+#    #+#             */
/*   Updated: 2024/02/20 10:58:07 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ptr_char_count)
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
