//������ŵ������а����ɲ���һ������

#include<stdio.h>

#define NUM 6

int main()
{
	int a[NUM], x, shunxu, clear_buffer();
	printf("�밴�ս�������%d�����֣��ÿո������", NUM-1);
	for (int i = 0; i < NUM-1; i++)
	{
		scanf_s("%d", &a[i]);
	}

	//������뻺����
	clear_buffer();

	puts("ԭʼ����Ϊ��");
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
	puts("�����������ִ�иó���");
	getchar();

	printf("������һ��Ԥ�����飬���س�ȷ�ϣ�");
	scanf_s("%d", &x);

	//������뻺����
	clear_buffer();

	//��Ԥ��ֵ��ֵ���������һλ
	a[NUM - 1] = x;
	
	//ʹ��ѡ������
	for (int i = 0; i < NUM - 1; i++)
	{
		int t = i, dt;
		for (int j = i + 1; j < NUM; j++)
		{
			if (a[t] > a[j] && shunxu == 0) //����ʱ�ж�
				t = j;
			if (a[t] < a[j] && shunxu == 1) //����ʱ�ж�
				t = j;
		}
		if (t != i)
		{
			dt = a[i];
			a[i] = a[t];
			a[t] = dt;
		}
	}

	puts("����������Ϊ��");
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