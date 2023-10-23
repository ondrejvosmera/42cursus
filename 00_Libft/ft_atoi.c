/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:49:31 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 13:59:02 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_atoi
** Converts a string to an integer
*/

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str >= 9 && *str <= 13 || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int main()
{
    char str[] = " +-42 ";

    int num = ft_atoi(str);

    printf("String: %s\n", str);
	printf("After atoi: %d\n", num);

    return 0;
}
*/
