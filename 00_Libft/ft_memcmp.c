/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:17:22 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 13:52:22 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memcmp
** Compares two blocks of memory
*/

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = ptr1;
	p2 = ptr2;
	i = 0;
	while (i < n)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		i++;
		p1++;
		p2++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, Wo";
	size_t n = 5;

	printf("String1: %s\n", str1);
	printf("String2: %s\n", str2);
	printf("--------------------------\n");
	printf("Compare %zu characters\n", n);

	int result = ft_memcmp(str1, str2, n);
	if (result == 0)
	{
		printf("Given strings are the same\n");
	} else if (result < 0) {
		printf("String1 is less than String2\n");
	} else {
		printf("String1 is greater than String2\n");
	}
	return 0;
}
 */
