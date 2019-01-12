#include<stdio.h>
int main()
{
	int x, y;
	do {
		puts("please input the x:");
		scanf_s("%d", &x);
		if (x < 10 && x >= 1)
			y = 2 * x - 1;

		else if (x < 1)
			y = x;
		else
			y = 3 * x - 11;
		printf("y is:%d\n", y);
	} while (1);
	return 0;
}