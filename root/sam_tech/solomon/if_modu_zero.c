#include <stdio.h>
/*Using if statement to print numbers whose module is "0"*/
int main(){
int i;

printf("Numbers whose module is \"0\"\n");
for(i = 0; i <= 100; i++){
	if((i%2 == 0) && (i%3 == 0))
printf("%d\n", i);
}
return(0);
}
