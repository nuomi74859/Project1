//�ҳ���ά����İ���

#include<stdio.h>
#define M 4
#define N 4

int main()
{
	//a�������ڴ��ԭʼ���ݣ�b�������ڴ��a�����ӳ���Ƿ�Ϊ����Ĺ�ϵ����
	int a[M][N], b[M][N], m, n, max, numStatus, clear_buff(), print_arr(int(*arr)[N], int m, int n);

	//��ʼ��b���飬��Ϊ0
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			b[i][j] = 0;
		}
	}
	
	//����Ŀ������
	for (int i = 0; i < M; i++)
	{
		printf("������� %d �� %d ��Ԫ�أ��ÿո����֣�", i, M);
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
		//maxλ����ֵ��ʼ��
		m = i;
		n = 0;
		max = a[m][n];
		numStatus = 1;

		//�ҳ����ظ����������������״ֵ̬
		for (int j = 1; j < N; j++)
		{
			if (max == a[i][j])
			{
				numStatus = 0;
				//break;
			}
			
			//�ҳ����������max
			else if (max < a[i][j])
			{
				max = a[i][j];
				m = i;
				n = j;
				numStatus = 1;
			}
		}

		//������������Ϊ�ظ���������������ѭ��
		if (numStatus == 0)
		{
			continue;
		}

		//�ҳ����ظ�����С����������״ֵ̬
		for (int i_1 = 0; i_1 < M; i_1++)
		{
			//������ֵΪ�ظ�ֵ��������
			if (max == a[i_1][n] && i_1 != m)
			{
				numStatus = 0;
				//break;
			}

			//�ҳ�������Сֵ
			else if (max > a[i_1][n])
			{
				max = a[i_1][n];
				m = i_1;
			}
		}

		//������������㣬�򻺴�Ԫ��ΪĿ��Ԫ��
		if (numStatus != 0)
		{
			b[m][n] = max;
		}
	}

	putchar('\n');

	//���Ŀ��Ԫ��
	print_arr(b, M, N);

	getchar();
	return 0;

}

//�������������
int clear_buff()
{
	int ch;
	while ((ch = getchar()) != '\n'&&ch != EOF)
	{

	}
	return 0;
}

//�����ά����
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