#include "main.h"

/**
 * _abs -function that computes the absolute value of an integer
 * @r: parameter to be checked
 * Return: -r or r
 *
*/

int _abs(int r)
{
	if (r < 0)
		return (-r);
	else if (r >= 0)
	{
		return (r);
	}
	return (0);
}
