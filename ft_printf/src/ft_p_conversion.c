#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_print_ptr(unsigned long long n)		//UINTPTR
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		ft_print_ptr(n/16);
		ft_print_ptr(n%16);
	}
	else
	{
		len++;							// i think this is correct.
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
	return (len);
}

int	ft_p_conversion(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		len += write(1, "0x0", 3);
	else
	{
		len += write(1, "0x", 2);
		len += ft_print_ptr(ptr);
	}
	return (len);
}
