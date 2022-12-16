/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:29 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 14:47:51 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. copy dst 2 src up to size - 1, and add a NUll at the end.
// return the size of src
#include <stdio.h>
#include "libft.h"
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;
	int		src_len;

	src_len = ft_strlen(src);
	pos = 0;
	while (pos < size - 1)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (src_len);
}

// this has some problems