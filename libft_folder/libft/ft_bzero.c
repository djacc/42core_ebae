/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:26 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 16:08:44 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	pos;
	char	*ptr_swapper;

	ptr_swapper = (char *)str;
	pos = 0;
	while (pos <= size)
	{
		ptr_swapper[pos] = '\0';
		pos++;
	}
}

/*
int	main(int argc, char const *argv[])
{
	char str[7] = "123";
	printf("%s\n", str);
	ft_bzero(str, 1);
	printf("%s\n", str);
	return (0);
}
*/