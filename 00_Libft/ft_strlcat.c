/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:10:53 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:34:33 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat
** Concatenates two strings, limiting the number of characters
** to prevent buffer overflow
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
	{
		return (srclen + size);
	}
	i = dstlen;
	j = 0;
	while (i < size - 1 && j < srclen)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

/*
#include <stdio.h>

int main() {
    char dst[20] = "Hello, ";
    const char src[] = "World!";
    size_t size = sizeof(dst);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);

    size_t result = ft_strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Return value: %zu\n", result);

    return 0;
}
 */
