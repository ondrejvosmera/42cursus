/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:11:19 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/25 13:52:36 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strtrim
** Allocates and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed;

	start = 0;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != NULL)
		end--;
	trimmed_len = end - start + 1;
	trimmed = malloc(sizeof(char) * (trimmed_len) + 1);
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, (char *)s1 + start, trimmed_len);
	trimmed[trimmed_len] = '\0';
	return (trimmed);
}

/*
#include <stdio.h>

int main() {
    char s[] = "  	Hello world!  	 ";
    char set[] = " 	H!";
    char *result = ft_strtrim(s, set);

	 printf("Original string: %s\n", s);

    if (result != NULL) {
        printf("Trimmed string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
 */
