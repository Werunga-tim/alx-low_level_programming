#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long first = 1;
	long long second = 2;
	long long next;
	int count;

	printf("%lld, %lld", first, second);

	for (count = 2; count < 50; count++)
	{
		next = first + second;
		printf(", %lld", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
