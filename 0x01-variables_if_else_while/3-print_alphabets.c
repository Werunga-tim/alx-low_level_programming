#include <stdio.h>


/**
 *  main -main function that prints the alphabet in lowercase and upper case
 *
 *  Return: Always returns 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
