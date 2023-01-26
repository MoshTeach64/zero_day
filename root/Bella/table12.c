#include <stdio.h>

/*main - program to print table 1-12
 *
 * Return (0);
 */

int main(void)
{
	int i, j;
	printf("Table 1 - 12");
	for (i = 1; i <= 12; i++)
	{
		for (j = 1; j <= 10; j++)
		{
		printf("%4d\t", (i * j));
		}
		printf("\n");
	}
		return(0);
}
