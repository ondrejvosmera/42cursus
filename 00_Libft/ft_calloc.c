/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:37:35 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/20 13:47:09 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_calloc
** Allocates a block of memory for an array of elements, initializing
** all bytes to zero
*/

#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	void	*result;

	result = malloc(num * size);
	if (result != NULL)
	{
		ft_bzero(result, num * size);
	}
	return (result);
}
