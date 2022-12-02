/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:21:23 by ebae              #+#    #+#             */
/*   Updated: 2022/12/02 14:58:45 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int count, size_t size)
{
	int	pos;

	pos = 0;
	while(str + pos && pos <= size) // < or <= ?
	{
		(unsigned char)str[pos] = count;	// string address + pos = char
		//	change str to void array
		pos++;
	}
}

int main(int argc, char const *argv[])
{
	char input1[10] = "0123456789";
	char input2[10] = "0123456789";

	ft_memset(input1, '.', 7*sizeof(char));
	 memset(input2, '.', 7*sizeof(char));
	
	printf("ft\t%s\n", input1);
	printf("lib\t%s\n",input2);

	
	return (0);
}
