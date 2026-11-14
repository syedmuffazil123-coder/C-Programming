#include <stdio.h>
int main()
{
int num1,num2,sum;
printf("ENTER A FIRST NUMBER:");
scanf("%d",&num1);
printf("ENTER A SECOND NUMBER:");
scanf("%d",&num2);
sum=num1+num2;
printf(" \nADDITION IS %d",sum);
sum=num1-num2;
printf(" \nSUBTRACTION IS %d",sum);
sum=num1*num2;
printf(" \nMULTIPLICATION IS %d",sum);
return 0;
}
