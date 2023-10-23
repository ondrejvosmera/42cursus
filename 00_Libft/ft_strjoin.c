/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:36:52 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/22 17:07:09 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strjoin
** Allocates and returns a new string, which is the result
** of the concatenation of ’s1’ and ’s2’
*/

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	final = malloc(sizeof(char) * (total_len + 1));
	if (!final)
		return (NULL);
	ft_strcpy(final, s1);
	ft_strcat(final, s2);
	return (final);
}

/* int main()
{
	char s1[] = "Hello, ";
    char s2[] = "World!";
    char *joined = ft_strjoin(s1, s2);
    if (joined) {
        printf("Final string: %s\n", joined);
        free(joined);
    } else {
        printf("Memory allocation failed.\n");
    }
} */
