#include <stdio.h>
int main() {

int a,b,temp;
printf("ENTER TWO NUMBERS(A and B):");
scanf("%d %d", &a , &b);

// SWAPPING PROCESS
temp =a;
a = b;
b = temp;
printf("AFTER SWAPPING: a= %d, b= %d\n",a,b);
return 0;
}
