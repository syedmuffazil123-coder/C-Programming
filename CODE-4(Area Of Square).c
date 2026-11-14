#include <stdio.h>
int main ()
{
	float side, area;
	
	printf("ENTER THE LENGTH OF THE SIDE OF THE SQUARE: ");
	scanf("%f", &side);
	area =side*side;
	printf("THE AREA OF SQUARE IS :%f\n", area);
	return 0;
}
