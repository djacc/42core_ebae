#include <stdio.h>

void	*calloc(size_t nmemb, size_t size)
{
  // Calculate the total size to allocate
	size_t total_size = nmemb * size;

  // Allocate the memory using malloc
	void *ptr = malloc(total_size);
	if (ptr == NULL)
	{
    // malloc failed, return NULL
		return NULL;
	}

  // Zero out the allocated memory
	memset(ptr, 0, total_size);

  // Return the pointer to the allocated and zeroed memory
	return ptr;
}
