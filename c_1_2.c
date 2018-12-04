#include <stdio.h>
int main()
{
	int a, b;
	int sum(int x, int y);
	scanf_s("%d,%d", &a, &b);
	printf("The sum is %d\n",sum(a, b));
	system("pause");
	return 0;
}

int sum(int x, int y)
{
	int z;
	z = x + y;
	return z;
}