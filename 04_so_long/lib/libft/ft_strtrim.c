/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:11:19 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 17:46:53 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strtrim
** Allocates and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.
*/

#include "libft.h"

int	ft_check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	*trimmed;

	len = ft_strlen(s1);
	start = 0;
	i = 0;
	while (ft_check(s1[len - 1], set))
		len--;
	while (len > 0 && ft_check(s1[start], set))
	{
		start++;
		len--;
	}
	trimmed = (char *) malloc(sizeof(char) * (len + 1));
	if (trimmed == NULL)
		return (NULL);
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
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
