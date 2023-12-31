#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int x;
	char y;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	for (x = 0; x < count / 2; x++)
	{
		y = s[x];
		s[x] = s[count - 1 - x];
		s[count - 1 - x] = y;
	}
}
