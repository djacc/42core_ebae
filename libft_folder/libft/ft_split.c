/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:54:26 by ebae              #+#    #+#             */
/*   Updated: 2023/01/10 18:43:43 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/

size_t	ft_strcount(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
			s++;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**output;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	output = malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (!output)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			output[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	output[i] = 0;
	return (output);	
}

// first while loops finds char beginning and end. finds the len
// substr is used to then get string.
