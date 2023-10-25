/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:28:15 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 12:09:54 by ovosmera         ###   ########.fr       */
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
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && count < n)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		count++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	const char haystack[] = "Hello, World!";
	const char needle[] = "Wo";
	size_t n = 8;

	printf("Haystack: %s\n", haystack);
	printf("Needle: %s\n", needle);

	char *result = ft_strnstr(haystack, needle, n);
	if (result != NULL)
	{
		printf("Substring found: %s\n", result);
	} else {
		printf("Substring not found.\n");
	}

	return 0;
}
 */
