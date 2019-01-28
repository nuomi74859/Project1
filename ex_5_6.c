#include<stdio.h>
int main()
{
	int fact(int n);
	int sn = 0, n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sn += fact(i);
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}

int fact(int n)
{
	int re = 1;
	for (int i = 1; i <= n; i++)
	{
		re *= i;
	}
	return re;
}