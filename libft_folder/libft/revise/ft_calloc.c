/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:30:24 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 20:41:42 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n_mem_b, size_t size);
{

	// block * size
	void *ptr = (void *)malloc(n_mem_b * size)
	// value set to NULL
	while (size--)					//using memset here would do!
	{
		ptr++ = 0;
	}
	return (ptr);
}