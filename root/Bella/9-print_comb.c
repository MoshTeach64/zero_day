#include <stdio.h>
/**
 * Write a program that prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use putchar four times maximum in your code
 */
int main(void)
{
	int digit;
	
	for(digit = 0; digit <= 9; digit++)
	{	putchar(digit + '0');
		if(digit < 9)
		{
			putchar(44);
			putchar(32);
		}

				
	}
	putchar('\n');
	return(0);
}
