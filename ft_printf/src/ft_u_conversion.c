#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

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

int	ft_u_conversion(unsigned int n)
{
	int	len;
	char	*num;

	len = 0;
	if (n == 0)
		len += ft_printstr("0");
	else
	{
		num = ft_utioa(n);
		if (num != NULL)
		{
			len += ft_printstr(num);
			free(num);
		}
	}
	return (len);
}
