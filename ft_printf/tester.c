#include "ft_printf.h"
#include "libft.h"

int main()
{
	int x = 3;
	int y = ft_isascii(x);
	write(1, &y, 1);

	return 0;
}

// makefile works now, 
// still open: how to test tester.c file for output?