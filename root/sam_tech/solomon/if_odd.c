#include <stdio.h>
/*A programme taht print odd numbers between 1 and 20*/

int main()
{
	int i;
	for(i = 1; i <= 20; i++)
	{
		if(i % 2 != 1 )
		{
			continue;
		}

		{
		printf("%d is an odd number\n", i);
		}
	}
		return(0);
}
