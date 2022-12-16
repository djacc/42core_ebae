#include <stdio.h>
#include <string.h>

#include "libft.h"

// replace strlen C99 function

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	// at most till: dstsize - strlen(dst) - 1
	size_t	count;

	count = 0;
	while (count < dstsize - strlen(dst) - 1)
	{
		dst[strlen(dst - 1) + count] = src[count]; // -1 cuz index 0, len count 1
		count++;
	}
	dst[strlen(dst - 1) + count] = 0;	// append NULL termination
	return (strlen(dst) + strlen(src)); // len of dst + src
}

// strlcat overflows... how to fix?

// int main()
// {
// 	int sizer = 3;

// 	char src_lib[] = "abcd";
// 	char dst_lib[] = "12345678";
// printf("lib:\t%s\n", dst_lib);
// strlcat(src_lib, dst_lib, sizer);
// printf("lib:\t%s\n", dst_lib);

// 	char src_ich[] = "abcd";
// 	char dst_ich[] = "12345678";
// printf("ich:\t%s\n", dst_ich);
// ft_strlcat(src_ich, dst_ich, sizer);
// printf("ich:\t%s\n", dst_ich);

// 	return 0;
// }
