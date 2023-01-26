#include <stdio.h>

/*print number of arguments passed into it*/

int main(int argc, char **argv __attribute__((unused)))
{	
	int num;
	(void) argv;


	printf("%d\n", num);
	/*printf("argc = %d\n", argc);*/
	return(0);

}
