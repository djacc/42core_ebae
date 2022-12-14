/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:22:08 by ebae              #+#    #+#             */
/*   Updated: 2022/12/08 17:58:31 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;
	int	pos;

	sign = 1;
	sum = 0;
	pos = 0;
	while (str[pos] == ' ' || (str[pos] <= '\r' && str[pos] >= '\0'))
		pos++;
	if (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		sum *= 10;
		sum += str[pos] - '0';
		pos++;
	}
	return (sign * sum);
}
/*
int main(int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_atoi(argv[1]));
	printf("lib\t%i\n", atoi(argv[1]));

	printf("stan\t%i\n", atoi(""));
	return (0);
}
*/