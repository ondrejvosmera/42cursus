/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:48:28 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/23 15:24:43 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strdup
** Creates a new dynamically allocated copy of a string
*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}

/*
#include <stdio.h>

int main() {
    const char* src = "Hello, World!";

    char* result = ft_strdup(src);

	printf("Original string: %s\n", src);

    if (result != NULL) {
        printf("Duplicated string: %s\n", result);
        free(result);
    } else {
        printf("Error in duplicating the string.\n");
    }

    return 0;
}
 */
