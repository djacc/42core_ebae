/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:22:57 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 16:41:19 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t size)
{
	size_t	count;

	char *ptr_src = (char *)src;
	char *ptr_dst = (char *)dst;

	if (src == dst)
		return (NULL);
	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	count = 0;
	while (count < size)
	{
		ptr_dst[count] = ptr_src[count];
		count++;
	}

	return (ptr_dst);	// is this return correct? -> *void functions should return what? nothing?
}

//	ft_memcpy(((void*)0), ((void*)0), 3);

// int main ()
// {
//   char str1[] = "Geeks"; 
//   char str2[] = "\th"; 
 
//   puts("str1 before memcpy ");
//   puts(str1);
 
//   /* Copies contents of str2 to str1 */
//   ft_memcpy(str1, str2, sizeof(str2));
 
//   puts("\nstr1 after memcpy ");
//   puts(str1);
 
//   return 0;
// }