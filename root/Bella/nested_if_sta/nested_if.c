#include <stdio.h>

int main(void)
{
	int i;
	for(i = -5; i <= 5; i++)
	{
		if(i > 0)
			if(i % 2 == 0)
			{
			printf("%d is an even number\n", i);
			}
			else
			{
			printf("%d is an odd number\n", i);
			}
		else if(i == 0)
		{
		printf("The number is zero\n", i);
		}
		else
		{
		printf("The number is negative: %d\n", i);
		}
	}
	return(0);
}
