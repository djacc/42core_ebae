/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:24:14 by ebae              #+#    #+#             */
/*   Updated: 2022/12/14 20:42:22 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t size);
void	ft_bzero(void *str, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t size);
//size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
// char	*ft_strchr(const char *str, int index);
// char	*ft_strrchr(const char *str, int index);
// int		strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *str, int index, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *str);

#endif