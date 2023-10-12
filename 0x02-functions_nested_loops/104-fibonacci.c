#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int long first = 1, second = 2, next;
	int count = 2;

	while (count < 96)
	{
		printf("%lu, ", first);
		next = first + second;
		first = second;
		second = next;
		count++;
	}
	printf("%lu, %lu\n", first, second);

	return (0);
}
