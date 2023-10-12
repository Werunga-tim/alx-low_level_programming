#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first = 1, second = 2, next, count = 2;

	printf("%d, %d", first, second);

	while (count < 98)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
		count++;
	}
	printf("\n");

	return (0);
}
