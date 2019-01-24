//计算斐波那契数列
#include<stdio.h>
int main()
{
	int n;
	int fibo(int n);
	puts("请输入斐波那契数列数量n：\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("第%d项为：%d\n",i,fibo(i));
	}
	system("pause");
	return 0;
}

//递归
int fibo(int n)
{
	int fn;
	if (n == 1 || n == 2)
		fn = 1;
	else
		fn = fibo(n - 1) + fibo(n - 2);
	return fn;
}