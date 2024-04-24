/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:25:26 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:38:14 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcpy
** Copies a string, limiting the number of characters to prevent buffer overflow
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
	{
		ft_memcpy(dst, src, srclen);
		dst[srclen] = '\0';
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}

/*
#include <stdio.h>

int main()
{
	char src[] = "Hello, World!";
	char dst[20];
	size_t n = 5;

	printf("Original string: %s\n", src);

	size_t result = ft_strlcpy(dst, src, n);
	printf("Copied string: %s\n", dst);
    printf("Return value: %zu\n", result);
	return 0;
}
 */
