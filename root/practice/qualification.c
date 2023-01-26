/* write a program that takes the name and age of user 
 * and print wether or not he is qualified 
 * for the job base on his age 
 * under 18 is too young, above 40 is too old, and 18 to 40 is qualified
 */

//print Hello world 10 times using only two putchar
#include <stdio.h>

int main(void)
{
	char x[] = "Hello world";

	int a;
	int b;

	for (a = 0; a < 11; a++)
	{
		putchar(x[a]);
	}
	putchar('\n');
	return (0);
}

