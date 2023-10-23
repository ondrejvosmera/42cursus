/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:20:48 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 13:59:06 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_bzero
** Sets a block of memory to zero (similar to memset with zero value)
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>

int main()
{
    char buffer[8] = "42Prague";

    printf("Before bzero: %s\n", buffer);
    ft_bzero(buffer, 8);
    printf("After bzero: %s\n", buffer);

    return 0;
}
 */
