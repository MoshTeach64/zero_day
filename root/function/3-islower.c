#include "main.h"

/*int _islower(int c)
{
	char lowercase = 'a';
	while(lowercase <= 'z')
	{
		if(lowercase == c)
	{
		return(1);
	}
		lowercase++;
	}
	return(0);
}*/


int _islower(int c)
{
	if (c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
