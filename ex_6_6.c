//����������

#include<stdio.h>
#define NUM 10

int main()
{
	int a[NUM][NUM];

	//��ʼ��������ǻ���ֵ��ÿ���׸�Ԫ�ض�Ϊ1��������0�������ֹ������ͬ�༭��������ɲ���
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

	//������Ǹ�ֵ
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	//����Ҫ������������
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