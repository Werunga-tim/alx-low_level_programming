#include <stdio.h>
#include <unistd.h>
/**
 * main - main fuunction for the program
 * 
 * Return: Always returns 0
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
