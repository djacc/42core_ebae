#include "include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	printf("\nSTARTING PRINTF OPERATION:\n");		//remove!
	printf("=====================\n");
	va_list	args;
	
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			switch (*str)	// cspdiuxX% (9 cases) // d an i the same?
			{
				case 'c':
					ft_c_conversion(va_arg(args, int));
					break;

				case 's':
					ft_s_conversion(va_arg(args, char*));
					break;

				case 'p':										// STUCK
					ft_p_conversion(va_arg(args, void *));
					break;
				
				// integer and unsigned

				case 'd':										// STUCK
					ft_d_conversion(va_arg(args, int));
					break;

				case 'i':										// STUCK
					ft_i_conversion(va_arg(args, int));
					break;

%d Prints a decimal (base 10) number.


			}
		}
		else
		{
			 write(1, str, 1); // ??? INHALT OF address of str is not *str? correct so just use str
		}
		str++;
	}
	va_end(args);
	printf("\n=====================\n");			//remove!
	printf("FINISH!\n");
	return (0);
}
// Error when % no specifier
// Error when not used argument

int main()
{
	// char x = 'x';
	// char *s = "no way! :D";
	char *i = "1";
	// char *ptr = &i;


	printf("\n--OWN--\n");
	// ft_printf("THE CHAR IS %c \n! new line\n", x);
	// ft_printf("string is %s \n! new line\n", s);
	ft_printf("address of i:%p\n", (void *)i);
	


	printf("\n--LIB--\n");
	// printf("THE CHAR IS %c \n! new line\n", x);
	printf("address of i:\n%p\n", (void *)i);
	return (0);
}
