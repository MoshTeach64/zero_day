/* Write a C function that can perform a multiplication of two integers and return the
calculated result.
*/

#include <stdio.h>

int integer_mul(int a, int b)
{
	int multi;
	multi = (a * b);
	return (multi);
}

/* Write a C program that calls the C function you just wrote in 
 * Exercise 4 to calculate the multiplication of 3 times 5 
 * and then print out the return value from the function on the screen.
 */

int main()
{
	int mul;
	mul = integer_mul(3, 5);
	printf("The multiplication of 3 times 5 is: %d", mul);
	return (0);
}
