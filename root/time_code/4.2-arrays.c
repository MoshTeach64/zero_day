#include <stdio.h>

int main(void)
{
	int size = 10;
	int grades[] = {2, 40, 23, 59, 60, 56, 56, 40, 34, 12};

	for(int i = 0; i < size; i++)
	{
		printf("%d ", grades[i]);
	}
	{
		printf("\n");
	}
	return (0);
}
