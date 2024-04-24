/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:33 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 14:26:10 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strchr
** Finds the first occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *) str;
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "Hello, World!";
	char c = 'l';
	size_t n = sizeof(str);

	void *result = ft_strchr(str, c);
	if (result != NULL)
	{
		printf("%c found at position %ld\n", c, (char *)result - str);
	} else {
		printf("%c not found in the string\n", c);
	}
	return 0;
}
 */
