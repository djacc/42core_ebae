/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:01:31 by ebae              #+#    #+#             */
/*   Updated: 2022/12/02 13:22:33 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_isprint(argv[1][0]));
	printf("lib\t%i\n", isprint(argv[1][0]));
	return (0);
}
*/
