#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int cap = 1024;
	int i;

	for (i = 0; i < cap; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
