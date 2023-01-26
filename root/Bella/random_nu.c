#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_of_n;
	srand(time(0));
	/*Note that we use the srand function to seed the random 
	 * number generator with the current time, so that the 
	 * sequence of random numbers generated will be different 
	 * each time the program is run. This is important to ensure 
	 * that the program produces truly random numbers
	 */
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_of_n = n % 10;
	
	if(last_of_n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_of_n);
	}
	else if(last_of_n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_of_n);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_of_n);
	}

	return (0);
}
