//二分法查数

#include<stdio.h>
#define NUM 15

int main()
{
	//定义函数变量
	int half_search(int *arr, int x), show_arr(int *arr, int n),clear_buff();
	
	//定义其他变量
	int a[NUM], x;

	printf("请输入%d个自然数，按空格间隔：",NUM);

	for (int i = 0; i < NUM; i++)
	{
		scanf_s("%d", &a[i]);
	}

	clear_buff();

	puts("输入数组为：");
	show_arr(a, NUM);


}

int clear_buff()
{
	int ch;
	while ((ch = getchar()) != EOF && ch != '\n')
	{

	}
	return 0;
}

int show_arr(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%-5d", arr[i]);
	}
	putchar('\n');
	return 0;
}