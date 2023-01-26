#include <stdio.h>

int main(void)
{
	char fam[] = "family2";

	int a;

	{
		for (a = 0; a < 7; a++);
		
		putchar(fam[a]);
		putchar('\n');

		return(0);
	}

}
