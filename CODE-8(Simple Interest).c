#include <stdio.h>
int main()
{
	float p,t,r,simpleinterest;
	printf("ENTER P,T,R: ");
	scanf("%f",&p);
	scanf("%f",&t);
    scanf("%f",&r);
    simpleinterest=(p*t*r)/100;
    printf("SIMPLE INTEREST :%f",simpleinterest);
    return 0;
}
