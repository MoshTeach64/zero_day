/* INL01.c: Read input by calling getc() */
#include <stdio.h>

int main(void)
{
int ch;

printf("Please type in one character:\n");
//ch = getc(stdin);
scanf("%c", &ch);
printf("The character you just entered is: %c\n", ch);
return 0;
}
