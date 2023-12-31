/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:08:05 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/15 15:30:51 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstdelone
** Takes as a parameter a node and frees the memory of the node’s content
** using the function ’del’ given as a parameter and free the node.
** The memory of ’next’ must not be freed
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL || del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
