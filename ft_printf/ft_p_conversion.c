#include "include/ft_printf.h"

void	ft_p_conversion(void *ptr)
{
	(void) *hold = &ptr;

	printf("\nhold: %s", hold);
	printf("\nlib fun:%p", ptr);	// THIS IS HOW IT SHOULD LOOK
}
/*how to store address in another variable? do i need to convert it to hex?
*/



/*the test code:

int i = 998;
int *ptr = &i;

ft_printf("address of i:\n%p\n", i);	// i instead of (void *)ptr
printf("address of i:\n%p\n", i);		// results in warning from printf

when only using 
*/