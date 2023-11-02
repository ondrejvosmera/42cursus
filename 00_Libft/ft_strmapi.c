/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:34:23 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 13:02:34 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strmapi
** Applies the function ’f’ to each character of the string ’s’,
** and passing its index as first argument to create a new string
** resulting from successive applications of ’f’
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

char test_fnc(unsigned int index, char c)
{
	return (c + 1);
}

int main()
{
	char *str = "Hello, World!";
	char *result = ft_strmapi(str, test_fnc);
	printf("Original string: %s\n", str);
	printf("After ft_strmapi: %s\n", result);
} */
