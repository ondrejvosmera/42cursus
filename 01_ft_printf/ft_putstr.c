/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:12:42 by ovosmera          #+#    #+#             */
/*   Updated: 2024/02/20 10:59:07 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ptr_char_count)
{
	if (str == NULL)
	{
		ft_putstr("(null)", ptr_char_count);
		return ;
	}
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		*ptr_char_count += 1;
	}
}
