/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:41 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/20 13:14:21 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

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

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *) str;
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	new_str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
		return (NULL);
	while (*s1)
	{
		new_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
