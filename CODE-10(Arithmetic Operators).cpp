#include <stdio.h>
int main(){
	int a,b;
	printf("ENTER TWO INTEGERS: ");
	scanf("%d %d", &a, &b);
	printf("ADDITION: %d + %d = %d\n", a ,b, a + b);
	printf("SUBTRACTION: %d - %d = %d\n", a ,b, a - b);
	printf("MULTIPLICATION: %d * %d = %d\n", a ,b, a * b);
	printf("DIVISION: %d / %d = %d\n", a ,b, a / b);
	printf("REMAINDER: %d %% %d = %d\n", a ,b, a % b);
	return 0;
	
}
