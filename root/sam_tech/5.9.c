#include <stdio.h>
/*  Write a program that uses getchar() 
 *  and putchar() to read in a character entered
 *  by the user and write the character 
 *  to the screen
 */
int main(void)
{
 	char ch;
	
	printf("entery one character: \n");
	ch = getchar();
	printf("The character you enter is: \n");
	putchar(ch);
	return (0);
}
