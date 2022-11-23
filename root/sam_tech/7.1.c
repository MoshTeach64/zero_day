#include <stdio.h>

int main(void)
{
int c;
c = ' ';

printf("Enter character: \n(enter x to exit)\n");

while(c != 'x')
{
c = getc(stdin);
//scanf("%c", &c);
putchar(c);
}
printf("\nout of the while loop. Bye!\n");
return (0);
}
