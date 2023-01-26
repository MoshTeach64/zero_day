#include <stdio.h>

int main(void)
{
    int x, y;
	
    printf("Table 1 to 12\n");

    for(x = 1; x <= 12; x++)
    {
        for(y = 1; y <= 12; y++)

        printf("%d * %d = %4d\t\n", x,y,x*y);
    }
    return(0);
}
