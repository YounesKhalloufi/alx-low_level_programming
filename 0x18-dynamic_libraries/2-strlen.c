#include "main.h"
<<<<<<< HEAD
/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
=======

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
