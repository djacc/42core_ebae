/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:48 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 16:33:42 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

	// put src after dst, at most (size - dst - 1)
	// why this infront of count?

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int		dst_len;
	size_t	count;
	int		src_len;

	dst_len = 0;
	count = 0;
	while (count < size - dst_len - 1)
	{
		dst[dst_len + count] = src[count];
		count++;
	}
	dst[dst_len + count] = '\0';
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	return (src_len + dst_len);
}
/*
int main(int argc, char const *argv[])
{
	char sorc[] = "123";
	char dest[] = "abcde";

	printf("length: %zu\n", strlcat(dest, sorc, 9));
	printf("%s\n", dest);
	return 0;
}
*/