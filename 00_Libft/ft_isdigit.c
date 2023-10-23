/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:38:42 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:14:13 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isdigit
** Checks if a character is a digit (0-9)
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
		if (ft_isdigit(test[i]))
		{
			printf("%c is a digit\n", test[i]);
		} else {
			printf("%c is NOT an digit\n", test[i]);
		}
		i++;
	}
}
*/
