#include <stdio.h>

int main(void)
{
int i;
/*int j;*/

/*for(i = '0'; i <= '9'; i++)
{
for(j = i+1; j <= '9'; j++)
{
	if(i < j)
	{
	putchar(i);
	putchar(j);
	if((i != '8') || (i == '8' && j != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
}
}
putchar('\n');
return(0);
}*/


for(i = 0; i < 100; i++)
{
	doubl = i / 10;
	single = i % 10;
	if(doubl > single)
	{
	putchar(doubl + '0');
	putchar(single + '0');
	}
	else 
	{
	putchar(44);
	putchar(32);
	}
	if(i < 89)
	{
	putchar(44);
	putchar(32);
	}
}
putchar('\n');
return(0);
}
