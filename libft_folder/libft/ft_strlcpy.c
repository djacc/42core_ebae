/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:23:19 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 20:04:00 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	length;

// 	length = ft_strlen(src);
// 	if (size == 0)
// 	{
// 		return (length);
// 	}
// 	if (length >= size)
// 	{
// 		length = size -1;
// 	}
// 	ft_memcpy(dst, src, length);
// 	dst[length] = 0;
// 	return (length);
// }


// size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
// {
//     size_t offset;

//     /* duplicate the string up to dstsize */
//     offset = 0;
//         /* guard against silly dstsize values */
//     if( dstsize > 0 )
//     {
//         while( *(src+offset) != '\0' )
//         {
//             /* bail if dstsize is met */
//             if( offset==dstsize )
//             {
//                 offset--;
//                 break;
//             }

//             /* duplicate the string */
//             *(dst+offset) = *(src+offset);
//             offset++;
//         }
//     }
//     /* always remember to cap a created string! */
//     *(dst+offset) = '\0';
    
//     /* return the string length of src */
//     while( *(src+offset) != '\0' )
//         offset++;

//     return(offset);
// }