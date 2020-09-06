#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b=0;
	scanf("%d", &a);
	if ((a % 3) == 0)
		b += 1;
	if ((a % 5) == 0)
		b += 1;
	if ((a % 7) == 0)
		b += 1;
	if (b == 3)
		printf("it can be \"divided\" by 3 5 and 7");
	else if (b != 3)
		printf("it can't be \"divided\" by 3 5 and 7");
	
}