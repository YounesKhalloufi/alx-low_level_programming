#include "main.h"

/**
<<<<<<< HEAD
  * _memcpy - copy memory area
  * @dest:pointer to return
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: the pointer to dest.
  */
=======
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
