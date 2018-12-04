#include <stdio.h>
int gcd(int x, int y)
{
	int r;
	r = x % y;
	if (r == 0)
		return y;
	else
		return gcd(y, r);
}
int main()
{
	int a, b, m;
	scanf_s("%d,%d",&a,&b);
	m = gcd(a, b);
	printf("m=%d\n",m);
	system("pause");
	return 0;
}