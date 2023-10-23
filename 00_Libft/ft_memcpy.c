/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:02:15 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/22 16:16:16 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcpy
** Copies a block of memory from one location to another
*/

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	dest = (char *)destination;
	src = (const char *)source;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
