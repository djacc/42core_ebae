#include "include/ft_printf.h"

void	ft_s_conversion(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);

}