//二分法查数

#include<stdio.h>
#define NUM 15

int main()
{
	//定义函数变量
	int half_search(int *arr, int x, int start, int end), show_arr(int *arr, int n), clear_buff(), sort_arr(int *arr, int n, int sort);
	
	//定义其他变量
	int a[NUM], x, y;

	printf("请输入%d个自然数，按空格间隔：",NUM);

	for (int i = 0; i < NUM; i++)
	{
		scanf_s("%d", &a[i]);
	}

	clear_buff();

	puts("输入数组为：");
	show_arr(a, NUM);

	sort_arr(a, NUM, 0);
	puts("排序后的数组为：");
	show_arr(a, NUM);

	puts("请输入查找的数字，按回车确认：");
	scanf_s("%d", &x);
	clear_buff();

	y = half_search(a, x, 0, NUM - 1);
	if (y >= 0)
	{
		printf("x = %d 为第 %d 个元素\n", x, y + 1);
	}
	else
	{
		puts("查无该元素！");
	}

	getchar();
	return 0;
}

//清空输入区缓冲函数
int clear_buff()
{
	int ch;
	while ((ch = getchar()) != EOF && ch != '\n')
	{

	}
	return 0;
}

//展示数组函数
int show_arr(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%-5d", arr[i]);
	}
	putchar('\n');
	return 0;
}

//使用选择排序法函数
int sort_arr(int *arr, int n, int sort)
{
	int m, t;

	//sort大于 0 则升序，sort小于等于 0 则降序
	if (sort <= 0)
	{
		for (int i = 0; i < n - 1; i++) {
			m = i;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[m] < arr[j])
				{
					m = j;
				}
			}
			if (m != i)
			{
				t = arr[i];
				arr[i] = arr[m];
				arr[m] = t;
			}
		}
	}
	else
	{
		for (int i = 0; i < n - 1; i++) {
			m = i;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[m] > arr[j])
				{
					m = j;
				}
			}
			if (m != i)
			{
				t = arr[i];
				arr[i] = arr[m];
				arr[m] = t;
			}
		}
	}
	return 0;
}

//二分法函数
int half_search(int *arr, int x, int start, int end)
{
	int m = (start + end) / 2;
	printf("s=%d,e=%d,m=%d\n", start, end, m);
	if (arr[m] == x)
	{
		return m;
	}

	//如果m已经是开端或者结果，则返回无结果
	if (m == start || m == end)
	{
		return -1;
	}

	//如果比目标值大，则m为开端
	if (arr[m] > x)
	{
		return half_search(arr, x, m, end);
	}

	//如果比目标值小，则m为结尾
	if (arr[m] < x)
	{
		return half_search(arr, x, start, m);
	}
}