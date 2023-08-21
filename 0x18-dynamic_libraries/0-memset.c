#include "main.h"

/**
<<<<<<< HEAD
 * _memset -fill memory with constant values
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area
 * Return: *s
 */

=======
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
	s[i] = b;
	}
=======
		s[i] = b;
	}

>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
	return (s);
}
