#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int index)
{
	int	pos;

	pos = strlen(str) - 1;
	while (pos >= 0)
	{
		if (str[pos] == index)
		{
			return (char *)(&str[pos]);
		}
		pos--;
	}
	return (NULL);
}

int main()
{
	char *lib_charPointer = strchr("Hello, world !", 0);
	char *my_charPointer = strchr("Hello, world !", 0);
	printf("\nlib: %p\n", lib_charPointer);
	printf("my:  %p\n", my_charPointer);
	return 0;
}