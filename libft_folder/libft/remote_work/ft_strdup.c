#include <string.h>

char	*strdup(const char *str)
{
	size_t	len;
	char	*dup;
	
	len = strlen(str);	// using strlen
	*dup = malloc(len + 1);
	if (dup == NULL)
	{
		return NULL;
	}

	memcpy(dup, str, len + 1);
	return (dup);
}