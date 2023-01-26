#include "main.h"

void print_alphabet_x10(void)
{
char a = 0, b;

while(a < 10)
{
	b = 'a';
	while(b <= 'z')
	{
	_putchar(b);
	b++;
	}
_putchar('\n');
a++;
}
}
