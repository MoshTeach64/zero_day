#include <stdio.h>

int integer_modulus(int i, int j)
{
	int modu;
	modu = (i % j);
	return (modu);
}

int main(void)
{
	int num;
	num = integer_modulus(10, 6);
	printf("The modulus of 10 and 6 is = %d", num);
	return(0);
}
