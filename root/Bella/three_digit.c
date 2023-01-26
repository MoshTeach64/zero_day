#include <stdio.h>

int main(void)
{
    int a;
    int tri;
    int doub;
    int single;
    for(a = 0; a < 1000; a++)
    {
    tri = a / 100;
    doub = (a / 10) % 10;
    single = a % 10;


    if(tri < doub && doub < single)
    {
        putchar(tri + '0');
        putchar(doub + '0');
        putchar(single + '0');

    if(a < 789)
    {
        putchar(44);
        putchar(32);
    }
    }
    }
return(0);
}

