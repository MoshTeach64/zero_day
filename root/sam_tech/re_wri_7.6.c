#include <stdio.h>
/* needs correction*/
int main(void)
{
int i, j;
 /* outer loop */
while (i <= 3)
{
	printf("The end of iteration %d of the outer loop.\n", i);
	i++;
do{
	printf("The start of iteration %d of the outer loop.\n", i);
i++;
}
while (j <= 4);
{
 /* inner loop */
printf("Iteration %d of the inner loop.\n", j);
j++;
}
}
return 0;
}
