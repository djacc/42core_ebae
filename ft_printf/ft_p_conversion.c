#include "include/ft_printf.h"

void	ft_p_conversion(void *ptr)
{
	write(1, &ptr, 1);
	printf("\n");
	printf("%p", ptr);
}
// the address is already given in hex right?




/*the test code:

int i = 998;
int *ptr = &i;

ft_printf("address of i:\n%p\n", i);	// i instead of (void *)ptr
printf("address of i:\n%p\n", i);		// results in warning from printf

when only using 
*/