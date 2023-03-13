#include "include/ft_printf.h"

int	ft_d_conversion(int c)
{
	int		len;
	char	*str;

	// missing len = 0 ?
	str = ft_itoa(c);
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
