#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t dstsize)
{
	int	count;

	char *ptr_src = (char *)src;
	char *ptr_dst = (char *)dst;

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;

	count = 0;
	while (count < dstsize)
	{
		ptr_dst[count] = ptr_src[count];
		count++;
	}

	return (ptr_dst);	// is this return correct?
}

int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "\th"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  /* Copies contents of str2 to str1 */
  ft_memcpy(str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}