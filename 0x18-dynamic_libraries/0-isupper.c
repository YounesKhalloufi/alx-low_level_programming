#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
/**
 * _isupper - check if c is upper
 *
 * @c: input for character
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
=======

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
