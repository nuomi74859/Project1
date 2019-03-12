//倒序排列输入的数组

#include<stdio.h>
#define NUM 10

int main()
{
	int a[NUM],t,ch;
	printf("请输入%d个数字：",NUM);
	for (int i = 0; i < NUM; ++i)
	{
		scanf("%d",&a[i]);
	}

	//清除输入缓冲区
	while((ch = getchar()) != EOF && ch != '\n')
	{}
	
	//数组为
	printf("数组为：");
	for (int i = 0; i < NUM; ++i)
	{
		printf("%-3d", a[i]);
	}
	putchar('\n');

	//执行倒序算法
	for(int i = 0; i < NUM; i++)
	{
		int j = NUM - 1 - i;
		if(i >= j)
			break;
		else
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	//输出倒序结果
	printf("倒序为：");
	for (int i = 0; i < NUM; ++i)
	{
		printf("%-3d", a[i]);
	}
	putchar('\n');

	getchar();
	return 0;
}
