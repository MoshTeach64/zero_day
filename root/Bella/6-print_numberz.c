#include <stdio.h>
/**
 * Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function 
 * (printf, puts, etc…) is forbidden)
 */

int main(void)
{
	int num;

	for(num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	{
	putchar('\n');
	return(0);
	}
}
