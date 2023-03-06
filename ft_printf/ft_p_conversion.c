#include "include/ft_printf.h"

// revise this function

void	ft_print_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_print_ptr(n/16);
		ft_print_ptr(n%16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1)	// what is going on here?
		else
			ft_putchar_fd((n - 10 + 'a'), 1)	//and here?
	}
}

void	ft_p_conversion(unsigned long long ptr)	// why long long?
{
	if (ptr == 0)
		write(1, "0x0", 3);
	else
	{
		write(1, "0x", 2)
		ft_print_ptr(ptr);
	}
}