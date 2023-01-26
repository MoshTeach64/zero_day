#include <stdio.h>
/*print even numbers between 1 and 100*/

int main()
{

	int i;
	for(i = 2; i <= 50; i++)
	{
		if(i % 2 > 0)
		{
			continue;
		}
		 printf("%d is an even number\n", i);
	}
	return(0);
}
