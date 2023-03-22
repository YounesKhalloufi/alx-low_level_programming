#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * letter Another cases, shows 0
 *
 * @c: character to check
 *
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
