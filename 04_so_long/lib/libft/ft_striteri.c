/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:04:06 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 13:19:48 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_striteri
** Applies the function ’f’ on each character of the string passed as argument,
** passing its index as first argument. Each character is passed by
** address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void test_fnc(unsigned int index, char *c)
{
	*c = *c + 1;
}

int main()
{
	char str[] = "Hello, World!";

	printf("Original string: %s\n", str);
	ft_striteri(str, test_fnc);
	printf("After ft_striteri: %s\n", str);
}
 */
