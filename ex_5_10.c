#include<stdio.h>
int main()
{
	double an(int n), n = 20;
	double bn(int n), sn = 0;
	for (int i = 1; i <= n; i++)
	{
		//printf("bn:%f\n", bn(i));
		sn += bn(i);
	}
	printf("sn:%f\n", sn);
	system("pause");
	return 0;
}

//an 原则上是斐波那契数列的变种
double an(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return an(n - 1) + an(n - 2);
}

double bn(int n)
{
	double re;
	re = an(n + 1) / an(n);
	//printf("an+1:%f,an:%f\n", an(n + 1), an(n));
	return re;
}