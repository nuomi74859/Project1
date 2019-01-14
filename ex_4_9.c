#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int how_much(int num), every_num(int num), reverse(int num);
	do {
		puts("请输入一个不多于5位数的正整数：");
		scanf_s("%d", &num);
		if (num > 99999 || num < 0)
			puts("输入错误数值，请重试\n");
		else
			break;
	} while (1);
	printf("num为%d位数\n", how_much(num));
	every_num(num);
	reverse(num);
	system("pause");
	return 0;
}

int how_much(int num)
{
	int i = 0;
	for (; num >= 1; num /= 10)
	{
		i++;
	}
	//printf("num为%d位数\n", i);
	return i;
}

int every_num(int num)
{
	int i = how_much(num) - 1;
	for (; i >= 0; i--)
	{
		int j = pow(10, i);
		printf("第%d位为：%d\n", i+1, num / j);
		num = num % j;
	}
	return 0;
}

int reverse(int num)
{
	int i = how_much(num) - 1, re_num = 0;
	for (; i >= 0; i--)
	{
		int j = pow(10, i);
		re_num = re_num + (num % 10) * j;
		num = num / 10;
	}
	printf("逆序数字为：%d\n", re_num);
	return re_num;
}