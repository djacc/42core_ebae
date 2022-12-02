/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:26 by ebae              #+#    #+#             */
/*   Updated: 2022/12/02 17:34:12 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	bzero(void *str, int size)
{
	int	pos;
	
	pos = 0;
	while(pos < size) // < or <= ???
	{
		str[pos] = '\0';
		pos++;
	}
}

int	main(int argc, char const *argv[])
{
	char input1[10] = "0123456789";
	char input2[10] = "0123456789";

	ft_memset(input1, '.', 7*sizeof(char));
	 memset(input2, '.', 7*sizeof(char));
	
	printf("ft\t%s\n", input1);
	printf("lib\t%s\n",input2);

	return (0);
}
