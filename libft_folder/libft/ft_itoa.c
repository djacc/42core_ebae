/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:42:07 by ebae              #+#    #+#             */
/*   Updated: 2022/12/27 15:00:49 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_len_o_num(int nb)
{
	int len;

	len = 0;
	if (nb <= 0)	// if only using < it does not recognize case 0 input.
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

//	why reverse the string?
//	rewrite this part										// REWRITE THIS PART!!!
static	char	*ft_rev_str(char *str)
{
	int	start;
	int	final;

	start = 0;
	final = ft_strlen(str) - 1;
	while (start < final - start)
	{
		str[start] = str[start] ^ str[final - start];
		str[final - start] = str[start] ^ str[final - start];
		str[start] = str[start] ^ str[final - start];
		start++;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int			i;
	long int	sign;	// long int? min value handle
	long int	nb_edit;
	char		*str;

	i = 0;
	sign = 0;
	nb_edit = (long int)nb;
	str = (char *)ft_calloc((ft_len_o_num(nb_edit) + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb_edit == 0)
		str[i++] = '0';
	if (nb_edit < 0)
		nb_edit *= --sign;
	while (nb_edit > 0)
	{
		str[i++] = (nb_edit % 10) + '0';
		nb_edit /= 10;
	}
	if (sign)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	return (str = ft_rev_str(str));
}