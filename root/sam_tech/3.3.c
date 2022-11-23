#include <stdio.h>
/*This function multiply three integers and return the result*/

int integer_multi(int x, int y, int z)
{
	int result;
	result = x * y * z;
	return (result);
}

int main()
{
	int multi;
	multi =integer_multi(2, 4, 3);
	printf("The multiplication of 2, 4 and 3 is: %d", multi);
	return (0);

}
