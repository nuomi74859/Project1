#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int how_much(int num), every_num(int num), reverse(int num);
	do {
		puts("������һ��������5λ������������");
		scanf_s("%d", &num);
		if (num > 99999 || num < 0)
			puts("���������ֵ��������\n");
		else
			break;
	} while (1);
	printf("numΪ%dλ��\n", how_much(num));
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
	//printf("numΪ%dλ��\n", i);
	return i;
}

int every_num(int num)
{
	int i = how_much(num) - 1;
	for (; i >= 0; i--)
	{
		int j = pow(10, i);
		printf("��%dλΪ��%d\n", i+1, num / j);
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
	printf("��������Ϊ��%d\n", re_num);
	return re_num;
}