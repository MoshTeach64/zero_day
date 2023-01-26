#include <stdio.h>
/**
 * Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 */

int main(void)
{
//char lower = 'a';
//char upper = 'A';

//while(lower <= 'z')
for(int lower = 'a'; lower <= 'z'; lower++)
{
	putchar(lower);
	//lower++;
}
//while(upper <= 'Z')
for(int upper = 'A'; upper <= 'Z'; upper++)
{
	putchar(upper);
	//upper++;
}
putchar('\n');
return (0);
}

