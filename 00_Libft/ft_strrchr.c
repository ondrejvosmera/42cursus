/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:52:12 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 12:15:25 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrchr
** Finds the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *) &str[i]);
		}
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "Hello, World!";
	char c = 'l';
	size_t n = sizeof(str);

	void *result = ft_strrchr(str, c);
	if (result != NULL)
	{
		printf("%c found at position %ld\n", c, (char *)result - str);
	} else {
		printf("%c not found in the string\n", c);
	}
	return 0;
}
 */
