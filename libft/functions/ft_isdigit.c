/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:58:14 by ebae              #+#    #+#             */
/*   Updated: 2022/11/29 18:36:10 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_isdigit(argv[1][0]));
	printf("lib\t%i\n", isdigit(argv[1][0]));
	return (0);
}
*/
