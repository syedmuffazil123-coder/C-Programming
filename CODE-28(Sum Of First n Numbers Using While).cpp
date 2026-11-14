#include <stdio.h>
int main()
{
	int n,i = 1,sum = 0;
	
	printf("ENTER N: ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("SUM = %d\n",sum);
	
	return 0;
}
