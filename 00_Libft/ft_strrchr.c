/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:52:12 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 15:31:24 by ovosmera         ###   ########.fr       */
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
	char	*found;

	if (str[0] == '\0' && c != '\0')
		return (NULL);
	i = 0;
	found = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			found = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
		return ((char *) &str[i]);
	return (found);
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
