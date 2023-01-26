/*The user have to guess a number from 0-50*/
/*output whether or not the person is correct*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	/*psuedo random number generator*/
	/*this gets seeded*/
	/*outputs a result*/
	/*seed- from the clock*/

	int maxValue = 50;
	srand(time(NULL));
	int randomNumber = rand() % maxValue + 1;

	printf("%d\n", randomNumber);
	printf("Guess a number 0 - %d\n", maxValue);
	int input;
	scanf("%d", &input);

	if(input == randomNumber)
	{
		printf("You win!");
	}
	else
	{
		printf("You don't win!Try again!");
	}
	printf("Thank you for playing with us!\n");
	return (0);
}

