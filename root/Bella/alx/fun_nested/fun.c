#include <stdio.h>

int main(void)
{
int i;
int j;
int c;
for (i = 0; i < 5; i++)
{
 for(j = 0; j < 5; j++)
{
    if((i = 3) || (j = 3))
        break;

    c = i*j;
printf("%d * %d = %d\n", i, j, c);
}
}
return(0);
}

