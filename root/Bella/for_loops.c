#include <stdio.h>

/*program to print a table from 1 - 20*/

int main()
{
	int x, y;
	int num = x*y;


	for (x = 1; x <= 20; x++)
	{
	
	for(y = 1; y <= 10; y++)
		{
		printf("%4d\t", (x*y));
		}
		printf("\n");
	}
	return (0);
}
