#include <stdio.h>
/*  Given the declaration double dbl_num = 123.456;, 
 *  write a program that prints out the value of dbl_num in both 
 *  floating-point and scientific notation formats
 */

int main(void)
{
	double dbl_num;
	dbl_num = 123.456;

	printf("The value of 123.456 in floating-point is: %f\n", dbl_num);
	printf("The value of 123.456 in scientific notation is: %e\n", dbl_num);
	return (0);
}
