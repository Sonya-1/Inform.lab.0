#include <stdio.h>

int main()
{
	float a, b, c;
	printf("Input a ");
	scanf("%f", &a);
	printf("Input b ");
	scanf("%f", &b);
	printf("Input c ");
	scanf("%f", &c);
	float d = a / (b + c);
	if (b + c == 0) {
		printf("Incorrect operation");
	}
	else {
		printf("%f / (%f + %f) = %f\n", a, b, c, d);
	}
	return 0;
}