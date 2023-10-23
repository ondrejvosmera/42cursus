/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:09:33 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:19:05 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strchr
** Finds the first occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *) &str[i]);
		}
		i++;
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
