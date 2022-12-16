#include <string.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;
	
	len = ft_strlen(str);	// using strlen
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return NULL;
	}

	ft_memcpy(dup, str, len + 1);
	return (dup);
}