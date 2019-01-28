#include<stdio.h>
int main()
{
	int rabc(int a, int b);
	//最大公约数p，最小公倍数q
	int m, n, p, q;
	puts("请输入两个正整数：");
	scanf_s("%d,%d", &m, &n);
	p = rabc(m, n);
	q = m * n / p;
	printf("最大公约数p：%d，最小公倍数q：%d\n", p, q);
	system("pause");
	return 0;
}

int rabc(int a, int b)
{
	int r;
	r = a % b;
	if (r == 0)
		return b;
	else
		rabc(b, r);
}