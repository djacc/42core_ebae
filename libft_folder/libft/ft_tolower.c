/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:03:15 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 16:22:10 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_tolower(argv[1][0]));
	printf("lib\t%i\n", tolower(argv[1][0]));
	return (0);
}
*/
