#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int l;
	long long int ll;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(ll));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));

	return (0);
}
