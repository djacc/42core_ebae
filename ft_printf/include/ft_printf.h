#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format_specifier(va_list args, const char format);

int		ft_s_conversion(char *str);
int		ft_c_conversion(int c);
int		ft_d_conversion(int c);


int		ft_p_conversion(unsigned long long ptr);
int		ft_print_ptr(intptr_t n);

int		ft_u_conversion(unsigned int n);
char	*ft_utioa(unsigned int n);
int		ft_num_len(unsigned int num);

int		ft_x_conversion(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);

int	ft_print_percent(void);

#endif
