#include <stdio.h>

int main(void)
{
char lowercase;

for(lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	if((lowercase == 'q') || (lowercase == 'e'))
		continue;
	putchar(lowercase);
}
putchar('\n');
return(0);
}
