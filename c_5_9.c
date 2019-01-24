//判断是否为素数
#include<stdio.h>
#include<math.h>
int main()
{
	int n, status = 0;
	puts("请输入一个大于3的整数：");
	scanf_s("%d", &n);
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			status = 1;
			break;
		}
	}
	if (status)
		puts("不是素数");
	else
		puts("是素数");
	system("pause");
	return 0;
}