/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:43:12 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 17:55:11 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s);
int	print_char(int c);
int	print_nbr(int n);

static int	handle_format(char c, va_list args)
{
	if (c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'd')
		return (print_nbr(va_arg(args, int)));
	else if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == '%')
		return ((int)write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, fmt);
	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
		{
			i++;
			count += handle_format(fmt[i], args);
		}
		else
			count += (int)write(1, &fmt[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
