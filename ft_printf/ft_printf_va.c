#include "include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const int num, ...)
{
	va_list args;
	int	i;

	va_start(args, num);
	i = 0;
	while (i < num)
	{
		int value = va_arg(args, int);
		printf("%d, %d\n", i, value);
		i++;
	}
	va_end(args);
	return (0);
}

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		return (1);
	}
	// ft_printf(argv[]);
	ft_printf(1, 7, 100, 999 );
	return (0);
}