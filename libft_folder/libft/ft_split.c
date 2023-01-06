/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:54:26 by ebae              #+#    #+#             */
/*   Updated: 2022/12/27 13:35:20 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// how does ft_toklen affect the overall function stability?
size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret++;	// instead of ++ret
			while (*s && *s != c)
			{
				s++;	// instead of above
			}
		}
		else
			s++; // same
	}
	return (ret);
}

// usecases of the variables
// how is ft_substr used, and what inputs are given to substr?
char	**ft_split(const char *s, char c)
{
	char	**output;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	output = malloc(sizeof(char *) * (ft_toklen(s, c) + 1)); // sizeof ?
	if (!output)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)	// instead of ++len
			{
				s++;
				len++;				// here !
			}
			output[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++; // instead of ++s
	}
	output[i] = 0;
	return (output);	
}