/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:51:01 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 15:14:07 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strncmp
** Compares the first n characters of two strings
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while ((*str1 != 0 || *str2 != 0) && i < n)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
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
