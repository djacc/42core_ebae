/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:32:21 by ebae              #+#    #+#             */
/*   Updated: 2022/12/07 17:06:57 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)	// size_t ???
{
	
	return ();
}


int	main(int argc, char const *argv[])
{
	const char *haystack = "hello world";
	const char *needle = "world";

	char *result_lib = strnstr(haystack, needle, strlen(haystack));
	char *result_ft = ft_strnstr(haystack, needle, strlen(haystack));

	if (result_lib != NULL) {
		printf("Found the substring at index %ld\n", result_lib - haystack);
	} else {
		printf("Substring not found\n");
	}
	
	if (result_ft != NULL) {
		printf("Found the substring at index %ld\n", result_ft - haystack);
	} else {
		printf("Substring not found\n");
	}
	
	return 0;
}
