#include "main.h"

/**
 * _abs - computes the absolute value of an integer
<<<<<<< HEAD
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (n);
	}
=======
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
}
