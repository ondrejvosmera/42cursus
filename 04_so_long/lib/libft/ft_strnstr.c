/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:28:15 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 16:16:08 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr
** Finds the first occurrence of a substring in a string
** with a specified maximum length
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < n)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	const char haystack[] = "Hello, World!";
	const char needle[] = "Wo";
	//size_t n = 8;

	printf("Haystack: %s\n", haystack);
	printf("Needle: %s\n", needle);

	char *result = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	if (result != NULL)
	{
		printf("Substring found: %s\n", result);
	} else {
		printf("Substring not found.\n");
	}

	return 0;
}
 */
