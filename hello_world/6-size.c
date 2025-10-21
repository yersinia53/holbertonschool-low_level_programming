#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main()
{
	int i;
	float f;
	char c;
	printf("Size of int: %d bytes\n", (int)sizeof(i));
	printf("Size of float: %d bytes\n", (int)sizeof(f));
	printf("Size of char: %d bytes\n", (int)sizeof(c));

	return 0;
}
