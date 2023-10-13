#include "main.h"

/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *@c: parameter being checked by the program
 *Return: Always 1 on success or 0 on failure
*/

int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
