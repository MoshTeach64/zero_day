#include <stdio.h>

int main(void)
{
	int ch;
	ch = ' ';
	printf("Please enter any character: \n or(enter 'k' to exit)\n");

	while(ch != 'k')
	{
		ch = getc(stdin);
		putchar(ch);
	}
	return (0);
}
