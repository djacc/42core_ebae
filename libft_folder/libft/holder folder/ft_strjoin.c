/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:09:15 by ebae              #+#    #+#             */
/*   Updated: 2022/12/20 20:52:16 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	what would be a failure case? - return NULL

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	len;

	// if (!s1 || !s2)
	// 	return (0);
	out = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
	{
		return (0);
	}
	ft_strlcpy(out, s1, len + 1);
	ft_strlcat(out, s2, len + 1);
	return (out);
}

// char	*ft_strjoin(const char *s1, const char *s2)
// {
// 	char	*ret;
// 	size_t	len;

// 	if (!s1 || !s2)
// 		return (0);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	ret = malloc(sizeof(char) * (len + 1));
// 	if (!ret)
// 		return (0);
// 	ft_strlcpy(ret, s1, len + 1);
// 	ft_strlcat(ret, s2, len + 1);
// 	return (ret);
// }