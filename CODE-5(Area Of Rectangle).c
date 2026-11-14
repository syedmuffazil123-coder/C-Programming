#include <stdio.h>
 int main()
 {
 	float length,breadth,area;
 	printf("ENTER THE LENGTH OF RECTANGLE: ");
 	scanf("%f",& length);
 	printf("ENTER THE BREADTH OF RECTANGLE: ");
 	scanf("%f",& breadth);
 	area = length * breadth;
 	printf("THE AREA OF THE RECTANGLE IS :%f\n", area);
 	return 0;
 }
