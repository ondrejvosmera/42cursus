/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:51:31 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/15 16:56:24 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;
	int		*ptr_char_count;

	char_count = 0;
	ptr_char_count = &char_count;
	va_start(args, format);

	while (*format != '\0')
	{
		if (format == '%')
		{
			format++;
		}
	}
	return (va_end(args), char_count);
}
