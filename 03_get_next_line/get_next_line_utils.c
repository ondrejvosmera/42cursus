/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:41 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/09 13:38:53 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*result;
	size_t			len;
	size_t			i;

	len = num * size;
	i = 0;
	if (!num || !size)
		return (malloc(0));
	if (len / size != num)
		return (NULL);
	result = (unsigned char *) malloc(len);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = 0;
		i++;
	}
	return ((void *)result);
}
