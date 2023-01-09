/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:19:33 by ebae              #+#    #+#             */
/*   Updated: 2023/01/09 19:27:18 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)	// explain whyh any of those
	{
		return;
	}
	while (lst && *lst)
	{
		tmp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	
}

/*
check if del or lst is null, or if *lst is empty
iterate thru the nodes and delete
*/