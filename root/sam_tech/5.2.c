#include <stdio.h>
/*Reading input by calling getchar()*/

int main(void)
{
	int ch1, ch2;

	printf("Please type in two characters together: \n");
	ch1 = getc(stdin);
	ch2 = getchar( );

	printf("The first character you just entered is: %c\n", ch1);
	printf("The second character you just entered is: %c\n", ch2);
	return (0);
}
