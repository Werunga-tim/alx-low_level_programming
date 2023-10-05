#include <stdio.h>
/**
 *main-the main function of the progrsm below
 *printf-formats and prints the out of the program
 *Return:retuns the value 0 at the end of the program
*/

int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
