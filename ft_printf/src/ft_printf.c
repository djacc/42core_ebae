#include "ft_printf.h"
#include "libft.h"

int	ft_format_specifier(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_c_conversion(va_arg(args, int));
	else if (format == 's')
		print_len += ft_s_conversion(va_arg(args, char *));
	else if (format == 'p')							// test if it works
		print_len += ft_p_conversion(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_d_conversion(va_arg(args, int));
	else if (format == 'u')							// revise u
		print_len += ft_u_conversion(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')		// understand
		print_len += ft_x_conversion(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_print_percent();

	return (print_len);
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		print_len;

	count = 0;
	print_len = 0;
	va_start(args, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			count++;
			print_len += ft_format_specifier(args, str[count]);
		}
		else
		{
			write(1, &str[count], 1);
			print_len++;
		}
		count++;
	}
	va_end(args);
	return (print_len);
}
