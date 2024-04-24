/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:02:45 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:12:55 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isascii
**  Checks if a character is within the ASCII range (0-127)
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	int test[] = {42, 128, 99, -1};

	int i = 0;
	while (i < 4)
	{
		if (ft_isascii(test[i]))
		{
			printf("%c is an ASCII character\n", test[i]);
		} else {
			printf("%c is NOT an ACII character\n", test[i]);
		}
		i++;
	}
}
 */
