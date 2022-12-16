/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy,.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:29 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 20:27:36 by ebae             ###   ########.fr       */
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

/*
[fail]: your strlcpy overflow the dest
[fail]: your strlcpy does not works with 0-length string
[crash]: your strlcpy copies while destsize is zero, or does not return the size of the string it tried to create
*/

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