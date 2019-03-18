//输出杨辉三角

#include<stdio.h>
#define NUM 10

int main()
{
	int a[NUM][NUM];

	//初始化杨辉三角基础值，每行首个元素都为1，其余用0替代，防止计算在同编辑环境下造成差异
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j < NUM; j++)
		{
			if (j == 0)
			{
				a[i][j] = 1;
			}
			else
				a[i][j] = 0;
		}
	}

	//杨辉三角赋值
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	//按照要求输出杨辉三角
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%-10d", a[i][j]);
		}
		putchar('\n');
	}
	getchar();
	return 0;
}