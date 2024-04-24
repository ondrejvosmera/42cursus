/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:00:16 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:25:56 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memchr
** Finds the first occurrence of a byte in a block of memory
*/

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	s = src;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char) c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "Hello World!";
	char c = 'l';
	size_t n = sizeof(str);

	void *result = ft_memchr(str, c, n);
	if (result != NULL)
	{
		printf("%c found at position %ld\n", c, (char *)result - str);
	} else {
		printf("%c not found in the string\n", c);
	}
	return 0;
}
*/
