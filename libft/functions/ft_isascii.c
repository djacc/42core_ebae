/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:30:32 by ebae              #+#    #+#             */
/*   Updated: 2022/11/29 18:40:14 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(unsigned char c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_isascii(argv[1][0]));
	printf("lib\t%i\n", isascii(argv[1][0]));
	return (0);
}
*/
