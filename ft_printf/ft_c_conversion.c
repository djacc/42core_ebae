#include "include/ft_printf.h"

int	ft_c_conversion(int c)
{
	write(1, &c, 1);
	return (1);
}
