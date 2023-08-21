#include "main.h"

/**
<<<<<<< HEAD
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

=======
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
