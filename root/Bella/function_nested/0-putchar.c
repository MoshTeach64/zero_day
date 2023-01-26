#include <stdio.h>
#include "main.h"

int main(void)
{
char *str = "_putchar";

while(*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
return(0);
}
