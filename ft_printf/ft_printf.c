#include "include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			switch (*str)	// cspdiuxX% (9 cases) // d an i the same?
			{
				case 'c':	// prints a single char
					ft_c_conversion(va_arg(args, int));
					break;

				case 's':	// prints a string
					ft_s_conversion(va_arg(args, char*));
					break;

				// fix, p
				case 'p':	// print pointer address in hex // work on this
					ft_p_conversion(va_arg(args, void *));
					break;
				
				case 'd':	// print decimal integer
					ft_d_conversion(va_arg(args, int));
					break;

				case 'i':	// print integer decimal (same as case: d), you could maybe combine d and i
					ft_d_conversion(va_arg(args, int));
					break;

				// fix, u
				case 'u':	// prints unsigned integer 
					ft_u_conversion(va_arg(args, unsigned int))
					// %u interprets a negative int number, find out how it works.

				case 'x':
				case 'X':
				case '%':
				
			}
		}
		else
		{
			 write(1, str, 1);
		}
		str++;
	}
	va_end(args);
	return (0);
}

// THING TO ADD:

// Error when % no specifier
// Error when incorrect no of arg
// Error when not used argument

int main()
{
	// char x = 'x';
	// char *s = "no way! :D";
	// char *i = "1";
	// char *ptr = &i;
	int n = -23412313;


	printf("\n--OWN--\n");
	ft_printf("Int is: %d", n);
	// ft_printf("THE CHAR IS %c \n! new line\n", x);
	// ft_printf("string is %s \n! new line\n", s);
	// ft_printf("address of i:%p\n", (void *)i);
	


	printf("\n--LIB--\n");
	printf("Int is: %d", n);
	// printf("THE CHAR IS %c \n! new line\n", x);
	// printf("address of i:\n%p\n", (void *)i);
	return (0);
}

// FOR NEXT TIME:

// add early error breakouts (ERROR HANDLING)
// add the rest of the format specifiers
// add 

// split norm the function