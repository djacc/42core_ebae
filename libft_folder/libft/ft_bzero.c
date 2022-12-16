/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:26 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 16:00:00 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	char *ptr_str;

	size -= 1;
	ptr_str = (char *)str;
	while (size + 1)
	{
		ptr_str[size] = '\0';
		size--;
	}
	
}

//	replace with 0 until size the bytes of the pointer

// int	main(int argc, char const *argv[])
// {
// 	char str[7] = "123";
// 	printf("%s\n", str);
// 	ft_bzero(str, 4);
// 	printf("%s\n", str);
// 	return (0);
// }