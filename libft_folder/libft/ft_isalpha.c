/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:58:14 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 16:27:58 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
///*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_isalpha(argv[1][0]));
	printf("lib\t%i\n", isalpha(argv[1][0]));
	return (0);
}
//*/
