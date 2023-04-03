#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
	{
		i = 0;
		prevC = consistC;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				consistC++;
			i++;
		}
		if (prevC == consistC) /* didn't equal a char from accept */
			break;
		s++;
	}
	return (consistC);
}
