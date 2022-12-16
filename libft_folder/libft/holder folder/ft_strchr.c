#include <stdio.h>
#include <string.h>

#include "libft.h"

char	*ft_strchr(const char *str, int index)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == index)
		{
			return (char *)(&str[pos]); // or return &str[pos]; ???
		}
		pos++;
	}
	return (NULL);
}

// int main()
// {
// 	char *lib_charPointer = strchr("Hello, world !", 111);
// 	char *my_charPointer = ft_strchr("Hello, world !", 111);
// 	printf("\nlib: %p\n", lib_charPointer);
// 	printf("my:  %p\n", my_charPointer);
// 	return 0;
// }
