/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:21:44 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 19:39:12 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (s1[pos] == s2[pos])
	{
		pos++;
	}
	return (s1[pos] - s2[pos]);
}

int main()
{
	char s1[] = "abca";	// compares the \0 char also
	char s2[] = "abca";	// i did strcmp not strncmp
	printf("%i", strncmp(s1, s2, 3));
	return 0;
}
