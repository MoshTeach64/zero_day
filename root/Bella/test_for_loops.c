#include <stdio.h>
/**
 * main - program to print table 1-50
 *
 * Return - Always return 0
 */

int main()
{
	int a, b;
	int table = a * b;

	for(a = 1; a <= 50; a++)
	{
	for(b = 1; b <= 10; b++)
	{
	printf("%4d\t", (a*b));
	}
	printf("\n");
	}
	return (0);

}
