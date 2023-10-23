/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:51:01 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:47:32 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strncmp
** Compares the first n characters of two strings
*/

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2 || *s1 == '\0')
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char s1[] = "Hello, World!";
	char s2[] = "Hello, World!";
	int num = 5;
	int result = ft_strncmp(s1, s2, num);

	if (result < 0) {
		printf("First %d characters of %s are less than %s\n", num, s1, s2);
   	} else if (result > 0) {
		printf("First %d characters of %s are greater than %s\n", num, s1, s2);
	} else {
		printf("First %d characters of %s are equal to %s\n", num, s1, s2);
	}
}
 */
