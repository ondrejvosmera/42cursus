/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:13:10 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:19:14 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memset
** Sets a block of memory to a specified value
*/

#include "libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>

int main()
{
    char str[13] = "Hello, World!";

    printf("Before memset: %s\n", str);
    ft_memset(str, 42, 5);
    printf("After memset: %s\n", str);

    return 0;
}
 */
