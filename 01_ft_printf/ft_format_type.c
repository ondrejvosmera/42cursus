/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:51:55 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/15 15:40:42 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format_type(char *format, va_list args, int *ptr_char_count)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), ptr_char_count);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), ptr_char_count);

}
