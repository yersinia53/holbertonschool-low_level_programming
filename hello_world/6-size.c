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
	long int l;
	long long int ll;
	printf("Size of char: %d bytes\n", (int)sizeof(c));
	printf("Size of int: %d bytes\n", (int)sizeof(i));
	printf("Size of long int: %d bytes\n", (int)sizeof(l));
	printf("Size of long long int: %d bytes\n", (int)sizeof(ll));
	printf("Size of float: %d bytes\n", (int)sizeof(f));

	return 0;
}
