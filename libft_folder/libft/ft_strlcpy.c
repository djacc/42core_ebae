/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:29 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 16:35:41 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. copy dst 2 src up to size - 1, and add a NUll at the end.
// return the size of src
#include <stdio.h>

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	pos;
	int	src_len;

	src_len = 0;
	while(src[src_len])
	{
		src_len++;
	}
	pos = 0;
	while (pos < size - 1)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (src_len);
}

/*
int	main(int argc, char const *argv[])
{
	char sorc[] = "abcde";
	char dest[] = "12345";

	printf("%zu\n", strlcpy(dest, sorc, 6));
	printf("dest: %s", dest);
	return 0;
}
*/