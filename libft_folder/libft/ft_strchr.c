/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:19:35 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 16:56:19 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int index)
{
	while (*str)
	{
		if (*str == (char) index)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char) index == 0)
		return ((char *)str);
	return (NULL);
}