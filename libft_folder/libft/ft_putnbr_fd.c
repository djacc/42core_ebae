/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:33:15 by ebae              #+#    #+#             */
/*   Updated: 2022/12/27 17:09:49 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file
descriptor.*/

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{	
	int		sign;
	char	c;

	// if (n == -2147483648)
	// {
	// 	ft_putstr_fd("-2147483648", fd);
	// 	return;
	// }
	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * sign, fd);	// recursion
	c = '0' + n % 10 * sign;
	ft_putchar_fd(c, fd);
}
