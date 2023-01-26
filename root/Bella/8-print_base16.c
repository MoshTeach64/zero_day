#include <stdio.h>
/**
 * Write a program that prints all the numbers of base 16 in lowercase, 
 * followed by a new line.
 * You can only use the putchar function (every other function 
 * (printf, puts, etc…) is forbidden)
 */

int main(void)
{
	int hex;
	char hexa = 97;
	for(hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}

		while(hexa <= 102)
		{
			putchar(hexa);
			hexa++;
		}
	putchar('\n');
	return(0);
}




