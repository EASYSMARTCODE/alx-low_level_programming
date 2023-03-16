#include <stdio.h>

/**
 * main - Prints the size of various types of standard error
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a char: %zu byte(s)\n", sizeof(long int));
	printf("Size of a char: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a char: %zu byte(s)\n", sizeof(float));
	return (0);
}
