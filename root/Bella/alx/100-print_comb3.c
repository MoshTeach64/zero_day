#include <stdio.h>

int main(void)
{
int i;
int single;
int doubl;

for(i = 0; i < 100; i++)
{
	doubl = i / 10;
	single = i % 10;

	{
	putchar(doubl + '0');
	putchar(single + '0');
	}

	if(doubl < single)
	{
	putchar(44);
	putchar(32);
	}
}
	if(i < 89)
	{
	putchar(44);
	putchar(32);
	}
putchar('\n');
return(0);
}
