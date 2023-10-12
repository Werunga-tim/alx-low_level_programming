#include "main.h"
#include <stdio.h>

/**
 * times_table -function that prints the 9 times table, starting with 0
 * Returns: void
*/

void times_table(void)
{
	int w, x, v, y, z;


	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 9; x++)
	{
		v = w * x;
		y = v / 10;
		z = v % 10;
	if (x == 0)
	{
		_putchar('0');
	}
	else if (v < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(y + '0');
		_putchar(y + '0');
	}
	}
	_putchar('\n');
	}
}
