/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:20:56 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 16:28:09 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	return (0);
}

/*
int	main (int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_isalnum(argv[1][0]));
	printf("lib\t%i\n", isalnum(argv[1][0]));
	return (0);
}
*/
