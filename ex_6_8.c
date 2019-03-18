//找出二维数组的鞍点

#include<stdio.h>
#define M 4
#define N 4

int main()
{
	//a数组用于存放原始数据，b数组用于存放a数组的映射是否为鞍点的关系数据
	int a[M][N], b[M][N], m, n, max, numStatus, clear_buff(), print_arr(int(*arr)[N], int m, int n);

	//初始化b数组，置为0
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			b[i][j] = 0;
		}
	}
	
	//输入目标数组
	for (int i = 0; i < M; i++)
	{
		printf("请输入第 %d 行 %d 个元素，用空格区分：", i, M);
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
		//putchar('\n');
	}

	print_arr(a, M, N);
	clear_buff();

	for (int i = 0; i < M; i++)
	{		
		//max位置数值初始化
		m = i;
		n = 0;
		max = a[m][n];
		numStatus = 1;

		//找出非重复的最大数，并给予状态值
		for (int j = 1; j < N; j++)
		{
			if (max == a[i][j])
			{
				numStatus = 0;
				//break;
			}
			
			//找出该行最大数max
			else if (max < a[i][j])
			{
				max = a[i][j];
				m = i;
				n = j;
				numStatus = 1;
			}
		}

		//如果该行最大数为重复数，则跳过本次循环
		if (numStatus == 0)
		{
			continue;
		}

		//找出非重复的最小数，并给予状态值
		for (int i_1 = 0; i_1 < M; i_1++)
		{
			//非自身值为重复值，则跳过
			if (max == a[i_1][n] && i_1 != m)
			{
				numStatus = 0;
				//break;
			}

			//找出该列最小值
			else if (max > a[i_1][n])
			{
				max = a[i_1][n];
				m = i_1;
			}
		}

		//如果条件都满足，则缓存元素为目标元素
		if (numStatus != 0)
		{
			b[m][n] = max;
		}
	}

	putchar('\n');

	//输出目标元素
	print_arr(b, M, N);

	getchar();
	return 0;

}

//清空输入区缓冲
int clear_buff()
{
	int ch;
	while ((ch = getchar()) != '\n'&&ch != EOF)
	{

	}
	return 0;
}

//输出二维数组
int print_arr(int (*arr)[N], int m, int n)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%-6d", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}