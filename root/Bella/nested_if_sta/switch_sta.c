#include <stdio.h>

int main(void)
{
	int day;

	printf("Please enter a single digit number\n");
	printf("(within the range of 1 to 5):\n");

	day = getchar();

	switch (day)
	{
	case '1':
		{
		printf("Day 1\n");
		}
	case '2':
		{
		printf("Day 2\n");
		}
	case '3':
		{
		printf("Day 3\n");
		}
	case '4':
		{
		printf("Day 4\n");
		}
defualt:
		;
	return(0);
	}






}
