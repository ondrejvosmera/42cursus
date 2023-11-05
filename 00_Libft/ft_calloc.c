/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:37:35 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 16:16:54 by ovosmera         ###   ########.fr       */
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
	unsigned char	*result;
	size_t			len;
	size_t			i;

	len = num * size;
	i = 0;
	if (!num || !size)
		return (malloc(0));
	if (len / size != num)
		return (NULL);
	result = (unsigned char *) malloc(len);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = 0;
		i++;
	}
	return ((void *)result);
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
