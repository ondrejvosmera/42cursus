/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:57:40 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 16:06:24 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_toupper
** Converts a character to uppercase
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*
#include <stdio.h>

int main()
{
	char c = 'a';
	printf("Original char: %c\n", c);

	c = ft_toupper(c);
	printf("Transformed char: %c\n", c);
	return 0;
}
 */
