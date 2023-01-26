#include <stdio.h>
/*Write a program that prints the alphabet in lowercase, followed by a new line*/
/*only use putchar*/

int main(void)
{
	char alph = 97;

	/*for(alph = 97; alph <= 122; alph++)*/
	/*while (alph <= 122)
	{
		putchar(alph);
		putchar('\n');
		alph++;
	}*/
	do
	{
		putchar(alph);
		alph++;
	}
	while(alph <= 122);
	return (0);

}
