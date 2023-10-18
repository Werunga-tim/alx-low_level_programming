#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int x, y, count = 0;

	for (x = 0; str[x] != '\0'; x++)
		count++;
	y = (count - 1) / 2;
	for (x = y + 1; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
