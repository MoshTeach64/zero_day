#include <stdio.h>

int main(void)
{
	int i;
	int single;
	int doubl;

	for(i = 0; i <= 100; i++)
	{	
		single = i % 10;
		doubl = i / 10;

		if(single > doubl)
		{
		putchar(doubl + '0');
		putchar(single + '0');

		if(i < 89)
		{
		putchar(44);
		putchar(32);
		}
	}
	}
	return(0);
}
