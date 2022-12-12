#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int index, size_t size)
{
	size_t			pos;
	unsigned char	find;
	const char *ptr_str;

	ptr_str = str;
	pos = 0;
	find = (unsigned char)size;
	while (pos < size)
	{
		if (ptr_str[pos] == index)	//	do i have to use find instead of index?
		{
			return (void *)(&str[pos]);
		}
		pos++;
	}
	return (NULL);
}

//	the code seems to work fine:
// problem: task says first occurce of index (converted to an unsigned int)

int main()
{
	char *lib_charPointer = memchr("Hello, world !", 33, 15);
	char *my_charPointer = memchr("Hello, world !", 33, 15);
	printf("\nlib: %p\n", lib_charPointer);
	printf("my:  %p\n", my_charPointer);
	return 0;
}
