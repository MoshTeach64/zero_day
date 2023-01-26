#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool sufferingRate;
	int people;
	printf("Do people really suffering in Nigeria? 1 is Yes and 0 is No: " );
	scanf("%d", &people);
	sufferingRate = people;

	if(sufferingRate)
	{
		printf("The rate people suffer in Nigeria is alarming and beyond what we can talk about\n");
	}
}
