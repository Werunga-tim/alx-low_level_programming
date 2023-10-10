#include <stdio.h>


/**
 * main - main function of the program that prints the alphabet in lowercase
 *
 *  Return: function gives back 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
