#include <stdio.h>

/** main - program that print table from 1-10
 *
 * Return (0);
 */

int main()
{
	int a;
	int b;
	int num = a * b;

	for(a = 1; a <= 10; a++)
	{
	for(b = 1; b <= 10; b++)
	{
		printf("%d\t", (a * b));
	}
		printf("\n");
	}
		return(0);
}
