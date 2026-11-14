#include <stdio.h>
int main()
{
	int n,i = 1;
	printf("ENTER A NUMBER YOU WANT A TABLE OF: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}
	while(i <= 10);
	return 0;
}
