#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	for (int i = 100; i < 1000; i++)
	{
		int j = pow(dec(i, 1), 3) + pow(dec(i, 2), 3) + pow(dec(i, 3), 3);
		if (i == j)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}
int dec(int x, int n)
{
	int i1 = pow(10, n), i2 = pow(10, n - 1);
	return x % i1 / i2;
 }