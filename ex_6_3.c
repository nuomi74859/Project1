//����һ����ά����ĶԽ���Ԫ��֮��

#include<stdio.h>
#define M 3
#define N 2
int main()
{
	int a[M][N], m = 0, n = 0;

	//�������������
	int ch;

	//�Զ�ά������и�ֵ
	for (int i = 0; i < M; i++)
	{
		//int t = N;
		printf("�������%d��%d��Ԫ�أ��ÿո������", i, N);
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			//�����������ʽ
		}

	}

	//�������
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%-5d", a[i][j]);
		}
		putchar('\n');
	}

	int M1 = M - 1, N1 = N - 1;

	//����Ϊ�����꣬����ֱ�߷��̼����������Ƿ�Ϊ������Ȼ���ۼӣ�ʹ�ñ���n
	for (int x = 0; x < N; x++)
	{
		//���������Ϊ�����������ڣ��������겻�����������ޣ���Ϊ��Ч
		if ((M1*x%N1 == 0) && (M1*x / N1) < M && (M1*x / N1) >= 0)
		{
			n += a[M1*x / N1][x];
		}
	}

	for (int x = 0; x < N; x++)
	{
		//���������Ϊ�����������ڣ��������겻�����������ޣ���Ϊ��Ч
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