#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

#include "../libft/libft.h"

int		ft_printf(const char *str, ...);

void	ft_c_conversion(int c);
void	ft_s_conversion(char *str);
void	ft_p_conversion(void *ptr);

#endif