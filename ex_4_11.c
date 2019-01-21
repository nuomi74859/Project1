#include<stdio.h>
int main()
{
	int a, b, c, d, m;
	puts("请输入a,b,c,d:\n");
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
	//第一轮，将在a,b,c,d 中选出最大的交换到a
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

	//第二轮，b,c,d中选最大的到b
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

	//第三轮，c,d中选最大的到b
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
