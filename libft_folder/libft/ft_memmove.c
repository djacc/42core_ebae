/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:07:38 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 14:43:56 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	int		count;
	char	*ptr_src;
	char	*ptr_dst;

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	if (ptr_src == ptr_dst || size == 0)
		return (ptr_dst);
	if (ptr_dst > ptr_src)
	{
		count = size - 1;
		while (count >= 0)
		{
			ptr_dst[count] = ptr_src[count];
			count--;
		}
	}
	else
		ft_memcpy(dst, src, size);
	return (ptr_dst);
}
