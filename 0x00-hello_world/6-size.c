#include <stdio.h>
/**
 *main-the main function of the progrsm below
 *printf-formats and prints the out of the program
 *Return:retuns the value 0 at the end of the program
*/

int main(void)
{
	printf("Size of char: %zu bytes(s)", sizeof(char));
	printf("Size of an int: %zu bytes(s)", sizeof(int));
	printf("Size of short: %zu bytes(s)", sizeof(short));
	printf("Size of a long: %zu bytes(s)", sizeof(long));
	printf("Size of a long long: %zu bytes(s)", sizeof(long long));
	printf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
