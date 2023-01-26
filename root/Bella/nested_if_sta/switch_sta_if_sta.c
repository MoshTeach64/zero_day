#include <stdio.h>

int main(void)
{
        int day;

        printf("Please enter a single digit number\n");
        printf("(within the range of 1 to 7):\n");

        day = getchar();

        switch (day)
	{
		case '1':
		{
		printf("Day 1\n");
		break;
		}
		case '2':
		{
		printf("Day 2\n");
		break;
		}
		case '3':
		{
		printf("Day 3\n");
		break;
		}
		case '4':
		{
		printf("Day 4\n");
		break;
		}
		case '5':
		{
		printf("Day 5\n");
		break;
		}
		case '6':
		{
		printf("Day 6\n");
		break;
		}
		case '7':
		{
		printf("Day 7\n");
		break;
		}
		default:
		;
	}
	return(0);
}

