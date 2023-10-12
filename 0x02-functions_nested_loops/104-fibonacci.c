#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by a comma
 * and a space, starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int count;
	unsigned long first = 0, second = 1, next;
	unsigned long first_half1, first_half2, second_half1, second_half2;
	unsigned long half1, half2;


	for (count = 0; count < 92; count++)
	{
	next = first + second;
	printf("%lu, ", next);
	first = second;
	second = next;
	}
	first_half1 = first / 10000000000;
	second_half1 = second / 10000000000;
	first_half2 = first % 10000000000;
	second_half2 = second % 10000000000;
	for (count = 93; count < 99; count++)
	{
	half1 = first_half1 + second_half1;
	half2 = first_half2 + second_half2;
	if (first_half2 + second_half2 > 9999999999)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (count != 98)
	printf(", ");
	first_half1 = second_half1;
	first_half2 = second_half2;
	second_half1 = half1;
	second_half2 = half2;
	}
	printf("\n");
	return (0);
}
