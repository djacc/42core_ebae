/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:50:17 by ebae              #+#    #+#             */
/*   Updated: 2023/03/29 16:53:47 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_d_conversion(int c)
{
	int		len;
	char	*str;

	str = ft_itoa(c);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
