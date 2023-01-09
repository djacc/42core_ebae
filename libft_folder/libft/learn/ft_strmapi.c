/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:14:14 by ebae              #+#    #+#             */
/*   Updated: 2022/12/27 15:46:46 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;		// why unsigned?
	char		*str;		// new string

	if (!s || !f)			// return if either is empty
		return (NULL);
	i = 0;
	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));	//memory
	if (!str)
		return (NULL);		// memory failure
	while (s[i])			// input string
	{
		str[i] = (*f)(i, s[i]);		//function operation on each array
		i++;
	}
	return (str);
}