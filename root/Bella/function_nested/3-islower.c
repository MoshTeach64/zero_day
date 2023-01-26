#include <stdio.h>
#include "main.h"

int _islower(int c)
{

	char alph = 'a';
	
	while (alph <= 'z')
	{
		if(alph == c)
		{
		return(1);
		}
		alph++;
	}
	return(0);
}
