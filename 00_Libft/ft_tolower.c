/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:58:08 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 16:05:58 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_tolower
** Converts a character to lowercase
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*
#include <stdio.h>

int main()
{
	char c = 'A';
	printf("Original char: %c\n", c);

	c = ft_tolower(c);
	printf("Transformed char: %c\n", c);
	return 0;
}
 */
