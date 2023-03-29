/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:49:55 by ebae              #+#    #+#             */
/*   Updated: 2023/03/29 18:53:21 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_format_specifier(va_list args, const char format);

int		ft_s_conversion(char *str);
int		ft_c_conversion(int c);
int		ft_d_conversion(int c);

int		ft_p_conversion(unsigned long long ptr);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);

int		ft_u_conversion(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);

int		ft_x_conversion(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);

int		ft_print_percent(void);

#endif
