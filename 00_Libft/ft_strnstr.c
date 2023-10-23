/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:28:15 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/20 12:25:23 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr
** Finds the first occurrence of a substring in a string
** with a specified maximum length
*/

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	if (*needle == '\0')
		return (haystack);
	while (count < n)
	{
		while (haystack[i] != '\0')
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
			i++;
		}
		count++;
	}
	return (NULL);
}
