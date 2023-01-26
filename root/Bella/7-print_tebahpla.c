#include <stdio.h>

/**
 * Write a program that prints the lowercase alphabet in reverse, 
 * followed by a new line.
 */

int main()
{
	char teb = 122;

	/*for(teb = 122; teb >= 97; teb--)*/
	while(teb >= 97)
	{
	putchar(teb);
	teb--;
	}
	putchar('\n');
	return(0);
}
