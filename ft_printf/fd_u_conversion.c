#include "include/ft_printf.h"

void	ft_u_conversion(unsigned int c)
{

	char *str;

	str = ft_itoa(c);	// itoa cant be used with unsigned,
	// maybe use recursion
	write(1, str, ft_strlen(str));
}
