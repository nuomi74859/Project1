#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	do {
		puts("Please input the num:");
		scanf_s("%d",&num);
	} while (num >= 1000 || num < 0);
	printf("the sqrt result is:%.0f\n", sqrt(num));
	system("pause");
	return 0;
}