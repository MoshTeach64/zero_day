#include <stdio.h>

int main()
{
    int i;
    printf("Odd Number  Even Number\n");
    for (i=0; i<10; i++)
       if ((i%2 != 0) | (i % 2 == 1))
        printf("%d\n", i);
    else
        {
        printf("%14d\n", i);
    }
    return (0);
}
