#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long first = 1;
	long second = 2;
	long next;
	int count;

	printf("%ld, %ld", first, second);

	for (count = 2; count < 50; count++)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
