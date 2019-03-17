//将排序号的数组中按规律插入一个数字

#include<stdio.h>

#define NUM 6

int main()
{
	int a[NUM], x, shunxu, clear_buffer();
	printf("请按照降序输入%d个数字，用空格隔开：", NUM-1);
	for (int i = 0; i < NUM-1; i++)
	{
		scanf_s("%d", &a[i]);
	}

	//清空输入缓冲区
	clear_buffer();

	puts("原始数组为：");
	for (int i = 0; i < NUM-1; i++)
	{
		if (a[i] > a[i + 1] && i + 1 < NUM - 1)
		{
			shunxu = 1;
		}
		if (a[i] < a[i + 1] && i + 1 < NUM - 1)
		{
			shunxu = 0;
		}
		printf("%-5d", a[i]);
	}
	putchar('\n');
	puts("按任意键继续执行该程序！");
	getchar();

	printf("请输入一个预定数组，按回车确认：");
	scanf_s("%d", &x);

	//清空输入缓冲区
	clear_buffer();

	//将预设值赋值给数组最后一位
	a[NUM - 1] = x;
	
	//使用选择排序法
	for (int i = 0; i < NUM - 1; i++)
	{
		int t = i, dt;
		for (int j = i + 1; j < NUM; j++)
		{
			if (a[t] > a[j] && shunxu == 0) //升序时判断
				t = j;
			if (a[t] < a[j] && shunxu == 1) //降序时判断
				t = j;
		}
		if (t != i)
		{
			dt = a[i];
			a[i] = a[t];
			a[t] = dt;
		}
	}

	puts("插入后的数组为：");
	for (int i = 0; i < NUM; i++)
	{
		printf("%-5d", a[i]);
	}

	getchar();
	return 0;
}

int clear_buffer()
{
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF)
	{
		//printf("..%d...", ch);
	}
	return 0;
}