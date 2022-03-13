#include "main.h"
/**
 * _realloc - function main, reallocates memory blocks using malloc free
 * @ptr: pointer void, allocated in memory
 * @old_size: size of ptr
 * @new_size: new size of new memory block
 * Return: pointer in new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;

	if (new_size > old_size)
	{
		ar = malloc(new_size);
		free(ptr);
		return (ar);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		free(ptr);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
