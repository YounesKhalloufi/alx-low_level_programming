#include "main.h"

/**
<<<<<<< HEAD
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
=======
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

<<<<<<< HEAD
	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
=======
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
	return (dest);
}
