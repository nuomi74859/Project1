#include<stdio.h>
int main()
{
	int an(int n);
	printf("%d\n", an(0));
	system("pause");
	return 0;
}

int an(int n)
{
	int re;
	if (n == 9)
		re = 1;
	else
		re = (an(n + 1) + 1) * 2;
	return re;
}
