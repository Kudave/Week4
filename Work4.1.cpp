#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
int main() {
	char a[100], b[100], c[100];
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	if (strlen(a) > strlen(b) && strlen(a) > strlen(c)) {
		if (strlen(b) > strlen(c))
			printf("%s\n%s\n%s", a, b, c);
		else if (strlen(b) < strlen(c))
			printf("%s\n%s\n%s", a, c, b);
		else if (strlen(b) == strlen(c))
			printf("%s\n%s	%s", a, b, c);
	}
	else if (strlen(a) == strlen(b)) {
		if (strlen(a) > strlen(c))
			printf("%s	%s\n%s", a, b, c);
		else if (strlen(a) < strlen(c))
			printf("%s\n%s	%s", c, a, b);
		else if (strlen(a) == strlen(c))
			printf("%s	%s	%s", a, b, c);
	}
	else if (strlen(a) == strlen(c)) {
		if (strlen(a) > strlen(b))
			printf("%s	%s\n%s", a, c, b);
		else if (strlen(a) < strlen(b))
			printf("%s\n%s	%s", b,c, a);

	}


	if (strlen(b) > strlen(a) && strlen(b) > strlen(c)) {
		if (strlen(a) > strlen(c))
			printf("%s\n%s\n%s", b, a, c);
		else if (strlen(a) < strlen(c))
			printf("%s\n%s\n%s", b, c, a);
	}
	else if (strlen(b) == strlen(c)) {
		if (strlen(a) > strlen(c))
			printf("%s\n%s	%s", a, b, c);
		else if (strlen(a) < strlen(c))
			printf("%s	%s\n%s", c, b, a);
		
	}
	if (strlen(c) > strlen(a) && strlen(c) > strlen(b)) {
		if (strlen(a) > strlen(b))
			printf("%s\n%s\n%s", c, a, b);
		else if (strlen(a) < strlen(b))
			printf("%s\n%s\n%s", c, b, a);
	}
}