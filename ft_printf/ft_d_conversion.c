#include "include/ft_printf.h"

void	ft_d_conversion(int c)
{
	// create an empty string
	// itoa the input int to str
	// count str length
	// write the string 

	char *str;

	str = ft_itoa(c);
	write(1, str, ft_strlen(str));
}
