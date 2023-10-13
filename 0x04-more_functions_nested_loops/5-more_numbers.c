#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14, followed by a new line.
 * Returns: always 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
