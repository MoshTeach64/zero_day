#include <stdio.h>
/**
 * Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 */

int main()
{
	char digit = 48;

	while(digit <= 57)
	{
	printf("%c\n", digit);
	digit++;
	}
	putchar('\n');
	return(0);
}
