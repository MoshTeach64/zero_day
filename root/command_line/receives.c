#include <stdio.h>

/*write a program that prints all arguments it receives*/


int main(int argc, char *argv[])
{
	int counter;

		for (counter = 0; counter < argc; counter++)
		{
			printf("%s\n", argv[counter]);
		}
		return (0);
}
