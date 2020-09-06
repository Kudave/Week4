#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a >= 1000 && a < 10000)
		printf("total : %.2f", (a * 0.9));
	else if (a >= 10000 && a < 50000)
		printf("total : %.2f", (a * 0.85));
	else if (a >= 50000)
		printf("total : %.2f", (a * 0.8));
	else if (a <= 0)
		printf("it's impossible");
	else
		printf("total : %d", a);
}