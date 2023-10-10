#include <stdio.h>
#include <unistd.h>
/**
 * main - main function for the program
 * Description: prints single numbers
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
