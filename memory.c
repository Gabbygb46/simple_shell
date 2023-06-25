#include "shell.h"

/**
 * bfree - frees a NULLs the address and pointers
 * @ptr: from address of the pointer to free
 *
 * Return: if freed 1, 0 otherwise.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
