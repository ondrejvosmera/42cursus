/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:57:38 by ovosmera          #+#    #+#             */
/*   Updated: 2024/02/20 10:57:52 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *ptr_char_count)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, ptr_char_count);
	}
	ft_putchar(n % 10 + '0', ptr_char_count);
}
