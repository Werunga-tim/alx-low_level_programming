#include "main.h"

/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, destlen = 0, srclen = 0;

	for (x = 0 ; dest[x] != '\0' ; x++)
		destlen++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;

	for (x = 0 ; x <= srclen ; x++)
		dest[destlen + x] = src[x];
	return (dest);
}
