#include <stdio.h>
/*A program that print prime numbers form 1 to 60*/

int main()
{
	int i, j;

	for(i = 2; i <= 60; i++)
	{	
		int is_prime = 1;

		for(j = 2; j < i; j++)
		{
		if(i % j == 0)
		{
			is_prime = 0;
		}
		}
		if(is_prime)
		{
			printf("%d\n", i);
		}
	}

		return(0);
}
