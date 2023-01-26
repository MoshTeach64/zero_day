#include <stdio.h>

int main(void)
{
int day;

printf("Please enter a single digit\n(from the range of 1 to 7)\n");
day = getc(stdin);
//day = getchar();
switch (day)
{
case '1':
printf("Good to have you on Day 1 which is Sunday\n");
break;

case '2':
printf("Good to have you on Monday\n");
break;

case '3':
printf("Good to have you on Tuesday\n");
break;

case '4':
printf("Good to have you on Wednesday\n");
break;

case '5':
printf("Good to have you on Thursday\n");
break;

case '6':
printf("Good to have you on Friday\n");
break;

case '7':
printf("Good to have you on saturday\n");
break;

default:
printf("It is not our working day\n");
break;
}
return(0);
}

