#include "main.h"

/**
 * print_line - unction that draws a straight line in the terminal.
 * @n: parameter to be checked by the program
 * Return: lines
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
