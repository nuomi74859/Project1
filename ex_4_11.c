#include<stdio.h>
int main()
{
	int a, b, c, d, m;
	puts("������a,b,c,d:\n");
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
	//��һ�֣�����a,b,c,d ��ѡ�����Ľ�����a
	if (a <= b)
	{
		m = a;
		a = b;
		b = m;
	}
	if (a <= c)
	{
		m = a;
		a = c;
		c = m;
	}
	if (a <= d)
	{
		m = a;
		a = d;
		d = m;
	}

	//�ڶ��֣�b,c,d��ѡ���ĵ�b
	if (b <= c)
	{
		m = b;
		b = c;
		c = m;
	}
	if (b <= d)
	{
		m = b;
		b = d;
		d = m;
	}

	//�����֣�c,d��ѡ���ĵ�b
	if (c <= d)
	{
		m = c;
		c = d;
		d = m;
	}
	printf("%d,%d,%d,%d\n",a,b,c,d);
	system("pause");
	return 0;
}
