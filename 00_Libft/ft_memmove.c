/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:12:34 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/22 16:17:01 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memmove
** Copies a block of memory, handling overlapping regions correctly
*/

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char *)destination;
	src = (const char *)source;
	if (destination == source)
		return (destination);
	else if (dest > src)
	{
		src += n;
		dest += n;
		while (n--)
		{
			*(--dest) = *(--src);
		}
	}
	else
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	return (destination);
}
