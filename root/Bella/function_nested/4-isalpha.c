#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int _isalpha(int c)
{
char alpha = 'a';
while(alpha <= 'z')
{
	if(c == 99 || c >= 67)
	{
	return(1);
	}
	alpha++;

}
return(0);
}
