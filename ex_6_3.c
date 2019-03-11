//计算一个二维数组的对角线元素之和

#include<stdio.h>
#define M 3
#define N 2
int main()
{
	int a[M][N], m = 0, n = 0;

	//用于清除缓冲区
	int ch;

	//对二维数组进行赋值
	for (int i = 0; i < M; i++)
	{
		//int t = N;
		printf("请输入第%d行%d个元素，用空格隔开：", i, N);
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			//清除缓冲区方式
		}

	}

	//输出数组
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%-5d", a[i][j]);
		}
		putchar('\n');
	}

	int M1 = M - 1, N1 = N - 1;

	//以列为横坐标，根据直线方程计算纵坐标是否为整数，然后累加，使用变量n
	for (int x = 0; x < N; x++)
	{
		//如果纵坐标为整数，即存在，且纵坐标不超过数列上限，则为有效
		if ((M1*x%N1 == 0) && (M1*x / N1) < M && (M1*x / N1) >= 0)
		{
			n += a[M1*x / N1][x];
		}
	}

	for (int x = 0; x < N; x++)
	{
		//如果纵坐标为整数，即存在，且纵坐标不超过数列上限，则为有效
		if (M1*x%N1 == 0 && (M1 - M1 * x / N1) < M && (M1 - M1 * x / N1) >= 0)
		{
			m += a[M1 - M1 * x / N1][x];
		}
	}

	printf("m:%d\nn:%d\n", m, n);
	getchar();
	system("pause");
	return 0;
}