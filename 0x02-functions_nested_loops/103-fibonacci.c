#include <stdio.h>

/**
 * main - prints sum of even terms in Fibonacci sequence <= 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long first = 1;
	long second = 2;
	long next;
	long sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
		{
		sum += first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld", sum);

	return (0);
}
