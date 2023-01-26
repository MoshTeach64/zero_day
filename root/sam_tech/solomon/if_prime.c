#include <stdio.h>

int main()
{
    int i, j;

    printf("Prime numbers from 1 to 20 are: \n");
    for (i = 2; i <= 20; i++)
    {
        int is_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

