#include "include/ft_printf.h"

int	ft_num_len(unsigned int num)	// understand its use for itoa
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_utioa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);		// implement len num finder
	num = (char *)malloc(sizeof (char) * (len + 1));
	if(!num)
		return (0);
	num[len] = '\0';			// understand this part
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

void	ft_u_conversion(unsigned int n)
{
	char *num;
	if (n == 0)
		ft_printstr(num)		// implement ft_printstr
	else
	{
		num = ft_utioa(n);		// implement unsigned itoa
		free(num);				//because we malloc in uitoa?
	}
}
