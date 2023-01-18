#include "include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *str)
{

	// this part will do the output!!!
	int	pos;
	pos = 0;			
	while (str[pos])	// condition: what if the input is null char?
	{
		write(1, &str[pos], 1);
		pos++;
	}
	printf("\n\tlen: %li\n", ft_strlen(str));
	write(1, "\n", 1);

	// this part will scan and look for certain triggers
	
	/*
	
		printf("%s blabla %i", str, int);

		the structure of printf:
		1. check for syntax correctness
			- scan the text, count % == no of arguments?
		2. check for special signs "\n"
		3. check for % conditions
		===== Idea would be to go thru every position and print out the char,
		if the pos encounters special sign, print the according thing
		if the pos encoounters % condition, convert variable and print
		===== Alternatively you could create a new string that stores the new output
		instead of printing out as its going thru the string

		// to do this we first need to find out how to modify the makefile
		so that i can test with ./a.out file which is still connected to the libs
		DONE!

		first check input correctness, for that understand multiple vatiable function

	*/

	return (0);
}

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		return (1);
	}
	ft_printf(argv[1]);
	return (0);
}