#include <stdio.h>
/*Write a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 */

int main(void)
{
char alph = 'a';
char e = 'e';
char q = 'q';

//while (alph <= 'z')
for(alph = 'a'; alph <= 'z'; alph++)
{
	if (alph == e || alph == q)
	{
	//alpha++;
	continue;
	}
	putchar(alph);
	//alpha++;
}
putchar('\n');
return (0);
}
