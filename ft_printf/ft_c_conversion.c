#include "include/ft_printf.h"

void	ft_c_conversion(int c)
{
	write(1, &c, 1);
}
