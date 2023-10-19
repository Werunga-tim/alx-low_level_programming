#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Retunr: void
 */

void print_rev(char *s)
{
	int count = 0;
	int x;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	for (x = count - 1 ; x >= 0 ; x--)
		_putchar(s[x]);
	_putchar('\n');
}
