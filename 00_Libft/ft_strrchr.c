/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:52:12 by ovosmera          #+#    #+#             */
/*   Updated: 2023/10/20 12:25:26 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrchr
** Finds the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *) &str[i]);
		}
		i--;
	}
	return (NULL);
}
