#include<stdio.h>
int main()
{
	int rabc(int a, int b);
	//���Լ��p����С������q
	int m, n, p, q;
	puts("������������������");
	scanf_s("%d,%d", &m, &n);
	p = rabc(m, n);
	q = m * n / p;
	printf("���Լ��p��%d����С������q��%d\n", p, q);
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