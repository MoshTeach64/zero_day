#include <stdio.h>

int main()
{
	int age;

	printf("Enter Student age: ");
	scanf("%d", &age);

	if(age <= 7)
	{
	printf("You are to be in class there: %d\n", age);
	}
	else
	{
	printf("Not qualify to be in any class %d\n", age);
	}
	return(0);

}
