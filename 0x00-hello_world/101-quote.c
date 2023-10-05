#include <unistd.h>

/**
 * main - this is the main function of the program below
 * write - this function writes the message to the standard error
 * Return: this function should return 1 at the end of the program
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
