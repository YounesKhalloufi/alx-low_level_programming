#include "main.h"
<<<<<<< HEAD
/**
 * _isalpha - returns 1 if c is a letter
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
=======

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
