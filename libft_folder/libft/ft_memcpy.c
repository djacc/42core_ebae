/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:22:15 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 19:54:00 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to stop dereferencing when using NULL chars double pointer has to be used...

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	while (size--)
	{
		*ptr_dst++ = *ptr_src++;
	}
	return (dst);
}

// [crash]: memcpy does not behave well with NULL as both params with size

/*
int main()
{

	char in[9] = "1";
	char out[9] = "\0";
	printf("%s\n",out);
	ft_memcpy(out, in, 5);
//	memcpy(out, in, 5);
	printf("%s\n",out);

	return 0;
}
*/