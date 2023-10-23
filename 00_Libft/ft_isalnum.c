/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:01:02 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:07:09 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isalnum
** Checks if a character is either an alphabetic character or a digit
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
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
		if (ft_isalnum(test[i]))
		{
			printf("%c is an alphanumeric character\n", test[i]);
		} else {
			printf("%c is NOT an alphanumeric character\n", test[i]);
		}
		i++;
	}
}
*/
