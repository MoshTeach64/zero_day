#include <stdio.h>

int main(void)
{
	int rows = 3;
	int const columns = 4;

	int studentGrades[3][4] = 
				{

					{1, 3, 4, 6},
					{3, 2, 4, 5},
					{32, 2, 4, 9}

				};
				
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						printf("%d ", studentGrades[i][j]);
					}
					printf("\n");
				}
				return (0);


}
