#include <stdio.h>
int max(int x, int y)
{
	int z;
	if (x >= y)
		z = x;
	else
		z = y;
	return z;
}

int main()
{
	int a, b, c;
	scanf_s("%d,%d",&a,&b);
	c = max(a, b);
	printf("The MAX is %d\n",c);
	system("pause");
	return 0;
}