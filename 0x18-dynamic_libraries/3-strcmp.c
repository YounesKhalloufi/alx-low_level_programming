#include "main.h"
<<<<<<< HEAD
#include<string.h>
/**
 * _strcmp -  function that compares two strings.
 * @s1:string1 to compare.
 * @s2: string two to compare.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
=======

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
