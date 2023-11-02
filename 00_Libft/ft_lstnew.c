/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:52:26 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/02 11:52:31 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstnew
** Allocates and returns a new node. The member variable ’content’
** is initialized with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
#include <stdio.h>

int main()
{
	char *str = "Hello, World!";
	t_list *node_test = ft_lstnew(str);
	printf("Node test: %s\n", (char *) node_test->content);
}
 */
