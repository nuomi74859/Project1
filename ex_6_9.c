//���ַ�����

#include<stdio.h>
#define NUM 15

int main()
{
	//���庯������
	int half_search(int *arr, int x), show_arr(int *arr, int n),clear_buff();
	
	//������������
	int a[NUM], x;

	printf("������%d����Ȼ�������ո�����",NUM);

	for (int i = 0; i < NUM; i++)
	{
		scanf_s("%d", &a[i]);
	}

	clear_buff();

	puts("��������Ϊ��");
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