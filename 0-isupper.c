#include "main.h"

/**
 * _isupper - a function that checks for uppercase characte
 * @c: parameter being checked by the program
 * Return: Always 1 on success and 0 on failure
 *
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
