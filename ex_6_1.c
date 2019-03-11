//筛法求素数，首选根据范围内最大素数圈定颗粒范围，根据颗粒的倍数晒出合数，剩余为素数

#include<stdio.h>
#include<math.h>
#define NUM 101

int main()
{
	int a[NUM];
	//数组初始化
	for (int i = 0; i < NUM; i++)
	{
		a[i] = 1;
	}

	for (int i = 2; i < sqrt(NUM); i++)
	{
		int iSta = 1;
		for (int j = i + 1; j < sqrt(i); j++)
		{
			if (j%i == 0)
			{
				iSta = 0;
				break;
			}
		}
		if (iSta == 1)
		{
			for (int m = 2; i*m < NUM; m++)
			{
				a[i*m] = 0;
			}
		}
	}
	puts("筛选法素数为：");
	for (int i = 2; i < NUM; i++)
	{
		if (a[i] == 1)
		{
			printf("%d\n", i);
		}
	}
	getchar();
	return 0;
}