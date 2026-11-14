#include <stdio.h>
int main()
{
	int a,b,c,average;
	printf("ENTER A FIRST NUMBER: ");
	scanf("%d",&a);
	printf("ENTER A SECOND NUMBER: ");
	scanf("%d",&b);
	printf("ENTER A THIRD NUMBER: ");
	scanf("%d",&c);
	average = (a+b+c)/3 ; 
	printf("THE AVERAGE IS :%d\n",average);
	return 0;
}
