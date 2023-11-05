/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:52:12 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 14:42:31 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrchr
** Finds the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*found;

	found = ft_strlen(str) + str;
	while (found >= str && *found != (char) c)
	{
		found--;
	}
	if (found >= str)
		return ((char *) found);
	else
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
