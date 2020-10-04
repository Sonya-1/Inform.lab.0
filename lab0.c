# include <stdio.h>

int main()
{
	int a, b;
	printf("Input a ");
	scanf("%d", &a);
	printf("Input b ");
	scanf("%d", &b);
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}