/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:04:13 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 14:15:52 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isprint
** Checks if a character is a printable character (including space)
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	int test[] = {42, 31, 127};

	int i = 0;
	while (i < 3)
	{
		if (ft_isprint(test[i]))
		{
			printf("%c is a printable character\n", test[i]);
		} else {
			printf("%c is NOT a printable character\n", test[i]);
		}
		i++;
	}
}
*/
