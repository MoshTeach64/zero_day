#include <stdio.h>

int main(void)
{
int c = 'a';

printf("enter a character:(enter x to exit)\n");
while(c <= 'z')
{
	c = getc(stdin);
    if(c == 'x')
    break;
printf("You Break the infinite while loop. Bye!\n");
}
return(0);
}
