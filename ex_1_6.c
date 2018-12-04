#include <stdio.h>
int max (int x, int y, int z)
{
	int m;
	if (x >= y && x >= z)
		m = x;
	if (y >= x && y >= z)
		m = y;
	if (z >= x && z >= y)
		m = z;
	return m;
}

int main ()
{
	int a, b, c;
	int max(int x, int y, int z);
	scanf_s("%d,%d,%d",&a, &b, &c);
	printf("The max is %d", max(a, b, c));
	system("pause");
	return 0;
}