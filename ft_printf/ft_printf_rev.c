#include "include/ft_printf.h"

void	ft_format_specifier(va_list args, const char format)
{
	if (format == 'c')
		ft_c_conversion(va_arg(args, int));
	else if (format == 's')
		ft_s_conversion(va_arg(args, char *));
	else if (format == 'p')							// revise p
		ft_p_conversion(va_arg(args, void *));
	else if (format == 'd' || 'i')
		ft_d_conversion(va_args(args, int));
	else if (format == 'u')							// revise u
		ft_u_conversion(va_args(args, unsigned int));
	else if (format == 'x' || format == 'X')		// revise xX
		ft_x_conversion(va_args(args, unsigned int), format);
	else if (format == '%')
		ft_print_percent();
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	while (str[count])				// i have to work with a counter
	{
		if (str[count] == '%')
		{
			count++;
			ft_format_specifier(args, str[count]);
		}
		else
		{
			write(1, str[count], 1);
		}
		count++;
	}
	va_end(args);
	return (0);
}