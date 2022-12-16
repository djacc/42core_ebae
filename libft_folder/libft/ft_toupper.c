/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:17:22 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 20:27:59 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_toupper(argv[1][0]));
	printf("lib\t%i\n", toupper(argv[1][0]));
	return (0);
}
*/
