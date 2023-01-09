/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:27:03 by ebae              #+#    #+#             */
/*   Updated: 2023/01/09 19:50:26 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)			// protection!
	{
		return (NULL);
	}
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst -> content))))
		{
			while (first)
			{
				new = first -> next;
				(*del)(first -> content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst -> next;
	}
	return (first);
}

// i dont understand the interaction of DEL