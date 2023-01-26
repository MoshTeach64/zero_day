#include <stdio.h>
/**
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
*/

int main(void)
{
	char alphabt;
	
	for(alphabt = 'a'; alphabt <= 'z'; alphabt++)
    	{
        	if((alphabt == 'e') || (alphabt == 'q'))
            		continue;
        	putchar(alphabt);
    	}
    	return(0);
}
