#include "shell.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: from the pointer to the memory area
 * @b: from the byte to fill *s with
 * @n: to be filled the amount of byte
 * Return: from (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * ffree - Frees a str of str
 * @pp: str of str
 */
void ffree(char **pp)
{
	char **b = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(b);
}

/**
 * _realloc - block of memory reallocates
 * @ptr: from previous malloc'ated block to pointer
 * @old_size: size of byte from previous block
 * @new_size: size of byte from new block
 *
 * Return: from pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
