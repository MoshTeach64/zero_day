#include <stdio.h>
#include <stdlib.h>
/*print the sum of numbers passed on the command line*/


int main(int argc, char *argv[])
{
	int i; 
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum = sum + atoi(argv[i]);
		}
			printf("sum of value = %d\n", sum);
	}
	return (0);


}
