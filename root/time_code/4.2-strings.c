#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char name[20];

	printf("please enter your name: \n");
	scanf("%19s", name);

	//char name[20];
	int letter = 0;

	while(name[letter] != '\0')
	{
		letter++;
	}
	//printf("size of name is %d\n", letter);
	printf("size of name is %lu", strlen(name));
	return (0);

}
