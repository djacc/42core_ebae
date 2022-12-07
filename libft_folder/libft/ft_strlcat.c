/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:48 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 16:38:09 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	// put src after dst, at most (size - dst - 1)
	int	dst_len;
	int	count;
	int	src_len;

	dst_len = 0;
	while(dst[dst_len])
	{
		dst_len++;
	}
	count = 0;
	while (count < size - dst_len - 1)
	{
		printf("insert @: %i\t", dst_len + count);
		dst[dst_len + count] = src[count];
		count++;
		printf("src struc: %s\n", src);
	}
	dst[dst_len + count] = '\0';
	src_len = 0;			// why this infront of count?
	while(src[src_len])
	{
		src_len++;
	}
	printf("src_len: %i\n", src_len);
	
	return (src_len + dst_len);
}

int main(int argc, char const *argv[])
{
	char sorc[] = "123";
	char dest[] = "abcde";

	printf("length: %zu\n", strlcat(dest, sorc, 9));
	printf("%s\n", dest);
	return 0;
}
