#include "include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

// printf("I have %i cookies!\n", count);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	
	va_start(args, str);
	while (*str)
	{
		if (*str ==  '%')
		{
			++str;
			switch (*str)
			{
				case 'd':
					int value = va_arg(args, int);
					printf("%d", value);
					break;
			}
		}
		else
		{
			putchar(*str); // use write instead
		}
		str++;
	}
	va_end(args);
	return (0);
}
// the funciton is going thru str and checking for % signs,
// if no % then its printed, (MISSING \n special char)
// if % then check next char for case.
// print each case according to its conditions


int main(int argc, char const *argv[])
{
	ft_printf(argv[1]);
	return (0);
}