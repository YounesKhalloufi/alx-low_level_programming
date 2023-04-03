#include "main.h"

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
