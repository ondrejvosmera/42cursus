/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:55:19 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 17:55:19 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = 0;
	while (s[len])
		len++;
	return ((int)write(1, s, len));
}

int	print_char(int c)
{
	return ((int)write(1, &c, 1));
}

static void	putnbr_rec(int n, int *count)
{
	char	c;

	if (n < 0)
	{
		*count += (int)write(1, "-", 1);
		if (n == -2147483648)
		{
			*count += (int)write(1, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	if (n > 9)
		putnbr_rec(n / 10, count);
	c = (n % 10) + '0';
	*count += (int)write(1, &c, 1);
}

int	print_nbr(int n)
{
	int	count;

	count = 0;
	putnbr_rec(n, &count);
	return (count);
}
