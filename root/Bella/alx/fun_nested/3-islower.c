#include "main.h"
int _islower(int c)
{
	char j = 'a';

	while(j <= 'z')
	{
	if (j == c)
	{
	return(1);
	}
	j++;
	}
	return(0);
}

