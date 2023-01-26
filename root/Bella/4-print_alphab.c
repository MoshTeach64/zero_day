#include <stdio.h>

/*int main(void)
{
	char a ='a';

	while(a <= 'z')
	{
		if(a != 'q' && a !='e')
		putchar(a);
		a++;
	}
	putchar('\n');
	return(0);
}
*/
int main(void)
{
	char a ; //= 'a';
	//while(a <= 'z')
	for(a = 'a'; a <= 'z'; a++)
	{
 		if(a == 'q'  || a == 'e')
			continue;
                	putchar(a);
	}
                putchar('\n');
		return(0);
}
