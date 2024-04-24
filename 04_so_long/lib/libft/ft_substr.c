/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:01:03 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 16:35:43 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_substr
** Allocates and returns a substring from the string ’s’
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	len_str;

	len_str = ft_strlen(s);
	if (start >= len_str)
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	if (len_str < start + len)
		len = len_str - start;
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>

int main()
{
	const char s[] = "Hello, World!";
	int start = 1;
	int len = 9;

	printf("String: %s\n", s);
	printf("Start: %d\n", start);
	printf("Length: %d\n", len);

	char *result = ft_substr(s, start, len);
	if (result != NULL)
	{
		printf("Substring: %s\n", result);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
}

 */
