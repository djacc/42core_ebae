/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:53 by ebae              #+#    #+#             */
/*   Updated: 2023/01/09 19:35:08 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// apply function and iterate thru the list

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
	{
		return;					// fail case protection!
	}
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;	// lst = ???
	}
}

// apply function 
// then move on