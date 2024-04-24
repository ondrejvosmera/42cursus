/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:05:31 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 15:37:39 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlen
** Calculates the length of a string
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "Hello, World!";
	int length = ft_strlen(str);
	printf("String: %s\n", str);
	printf("Length of the string is: %d\n", length);
	return 0;
}
 */
