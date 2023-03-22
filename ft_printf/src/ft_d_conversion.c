#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_d_conversion(int c)
{
	int		len;
	char	*str;

	// missing len = 0 ?
	str = ft_itoa(c);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
