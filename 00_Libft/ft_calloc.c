/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:37:35 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 14:16:10 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_calloc
** Allocates a block of memory for an array of elements, initializing
** all bytes to zero
*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*result;

	result = malloc(num * size);
	if (result != NULL)
	{
		ft_bzero(result, num * size);
	}
	return (result);
}

/*
#include <stdio.h>

int main()
{
    size_t num = 5;
    size_t size = sizeof(int);
    int* ptr = (int*)calloc(num, size);

    if (ptr != NULL) {
        printf("Memory allocated successfully!\n");

        printf("Contents of allocated memory:\n");

        size_t i = 0;
        while (i < num) {
            printf("%d ", ptr[i]);
            i++;
        }
        printf("\n");

        free(ptr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
