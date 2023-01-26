/*Using bitwise operators*/
#include <stdio.h>

int main(void)
{
	int x, y, z;

	x = 4321;
	y = 5678;
	printf("Given x = %u, i.e., 0x%4x\n", x, x);
	printf("      y = %u, i.e., 0x%4x\n", y, y);
z = x & y;
printf("x & y returns: %6u, i.e., 0x%04x\n",z, z);
z = x | y;
printf("x | y returns: %6u, i.e., 0x%04x\n",z, z);
z = x ^ y;
printf("x ^ y returns: %6u, i.e., 0x%04x\n",z, z);
printf(" ~x returns: %6u, i.e., 0x%04x\n", ~x, ~x);
return(0);
}
