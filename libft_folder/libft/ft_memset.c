/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:00:56 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 14:51:10 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (size--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (str);
}

/*
int main()
{
	char str[10] = "hello";
	my_memset(str, '*', 5);
	return 0;
}
*/