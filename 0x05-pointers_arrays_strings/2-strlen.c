#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to cehck length
 * Return: length
 */


int _strlen(char *s)
{
	int x;
	int length = 0;

	for  (x = 0; s[x] != '\0'; x++)
		length++;
	return (length);
}
