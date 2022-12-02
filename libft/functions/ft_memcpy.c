/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:37:17 by ebae              #+#    #+#             */
/*   Updated: 2022/12/02 17:59:37 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*memcpy(void *dest, const void *src, int size);
{
	int	pos;

	pos = 0;
	while (pos < size) // < or <= ? 
	{
		dest[pos] = src[pos];
		pos++;
	}
	// beachtet nicht edge case: src kleiner size
	// conditional statement?
	
}

int	main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
