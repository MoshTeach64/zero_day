#include <stdio.h>
/*Write a program that prints the alphabet in lowercase, 
 *and then in uppercase, followed by a new line.
 */
int main(void)
{
	char alphabets;
	char alphabet = 65;

	for(alphabets = 97; alphabets <= 122; alphabets++)
	{
		putchar(alphabets);
	}

		while(alphabet <= 90)
		{
		putchar(alphabet);
		alphabet++;
		}
	return (0);
}
