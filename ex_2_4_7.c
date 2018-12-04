#include <stdio.h>
int gcd(int x, int y)
{
	int r;
	r = x % y;
	//printf("x,y=%d,%d\n",x,y);
	if (r == 0)
		return y;
	else
		return gcd(y, r);
}
int main()
{
	int a, b, m;
	//对C语言中，需要注意输入时的分隔符号，否则容易引起结果错误
	printf("请输入入参，并使用‘,’分隔a,b：");
	scanf_s("%d,%d",&a,&b);
	m = gcd(a, b);
	printf("m=%d\n",m);
	system("pause");
	return 0;
}