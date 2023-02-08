#include "include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	printer(char *placeholder, ...)
{
	va_list args;
	int		pos;
	int		num_args;

	pos = 0;
	num_args = ft_strlen(placeholder);
	va_start(args, placeholder);
	while (pos < num_args)
	{
		if (placeholder[pos] == 'd')
		{
			int x = va_arg(args, int);
			printf("%d\n", x);
		}
		else if (placeholder[pos] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f\n", x);

		}
		pos++;
	}
	va_end(args);
	return (0);
}

int main()
{
	printer("ddfd", 4, 2 , 1.5, 3);
	return (0);
}