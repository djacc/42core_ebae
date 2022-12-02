/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:59:53 by ebae              #+#    #+#             */
/*   Updated: 2022/12/01 16:14:15 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

/*
int main(int argc, char const *argv[])
{
	printf("ft\t%i\n", ft_strlen(argv[1]));
	printf("lib\t%li\n", strlen(argv[1]));
	return (0);
}
*/