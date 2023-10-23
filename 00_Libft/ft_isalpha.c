/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:30:54 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:07:30 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isalpha
** Checks if a character is an alphabetic character (A-Z or a-z)
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	int test[] = {'a', 'Z', '3', '!', ' '};

	int i = 0;
	while (i < 5)
	{
		if (ft_isalpha(test[i]))
		{
			printf("%c is an alphabetic character\n", test[i]);
		} else {
			printf("%c is NOT an alphabetic character\n", test[i]);
		}
		i++;
	}
}
*/
