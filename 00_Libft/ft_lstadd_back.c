/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:51:45 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 15:06:47 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstadd_back
** Adds the node ’new’ at the end of the list
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new != NULL)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			tmp = *lst;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
	}
}
