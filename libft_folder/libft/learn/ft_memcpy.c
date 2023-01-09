/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:22:57 by ebae              #+#    #+#             */
/*   Updated: 2022/12/28 15:34:45 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	count;
	char	*ptr_src;
	char	*ptr_dst;

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	if (src == dst)
		return (NULL);
	count = 0;
	while (count < size)
	{
		ptr_dst[count] = ptr_src[count];
		count++;
	}
	return (ptr_dst);
}
