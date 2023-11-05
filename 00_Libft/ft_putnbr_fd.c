/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:56:06 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/05 17:54:47 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_putnbr_fd
** Outputs the integer ’n’ to the given file descriptor
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (str)
	{
		write(fd, str, ft_strlen(str));
		free(str);
	}
}

/*
int main()
{
	int num = -42;
	int fd = 1;

	ft_putnbr_fd(num, fd);

	return 0;
}
 */
