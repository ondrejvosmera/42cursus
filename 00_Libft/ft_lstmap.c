/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:32:19 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 16:10:04 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstmap
** Iterates the list ’lst’ and applies the function ’f’ on the content of
** each node. Creates a new list resulting of the successive applications of
** the function ’f’. The ’del’ function is used to delete the content of a
** node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;

	result = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		current = ft_lstnew(f(lst->content));
		if (current == NULL)
			ft_lstclear(&result, del);
		ft_lstadd_back(&result, current);
		lst = lst->next;
	}
	return (result);
}
