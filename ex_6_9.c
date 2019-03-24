//���ַ�����

#include<stdio.h>
#define NUM 15

int main()
{
	//���庯������
	int half_search(int *arr, int x, int start, int end), show_arr(int *arr, int n), clear_buff(), sort_arr(int *arr, int n, int sort);
	
	//������������
	int a[NUM], x, y;

	printf("������%d����Ȼ�������ո�����",NUM);

	for (int i = 0; i < NUM; i++)
	{
		scanf_s("%d", &a[i]);
	}

	clear_buff();

	puts("��������Ϊ��");
	show_arr(a, NUM);

	sort_arr(a, NUM, 0);
	puts("����������Ϊ��");
	show_arr(a, NUM);

	puts("��������ҵ����֣����س�ȷ�ϣ�");
	scanf_s("%d", &x);
	clear_buff();

	y = half_search(a, x, 0, NUM - 1);
	if (y >= 0)
	{
		printf("x = %d Ϊ�� %d ��Ԫ��\n", x, y + 1);
	}
	else
	{
		puts("���޸�Ԫ�أ�");
	}

	getchar();
	return 0;
}

//������������庯��
int clear_buff()
{
	int ch;
	while ((ch = getchar()) != EOF && ch != '\n')
	{

	}
	return 0;
}

//չʾ���麯��
int show_arr(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%-5d", arr[i]);
	}
	putchar('\n');
	return 0;
}

//ʹ��ѡ�����򷨺���
int sort_arr(int *arr, int n, int sort)
{
	int m, t;

	//sort���� 0 ������sortС�ڵ��� 0 ����
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

//���ַ�����
int half_search(int *arr, int x, int start, int end)
{
	int m = (start + end) / 2;
	printf("s=%d,e=%d,m=%d\n", start, end, m);
	if (arr[m] == x)
	{
		return m;
	}

	//���m�Ѿ��ǿ��˻��߽�����򷵻��޽��
	if (m == start || m == end)
	{
		return -1;
	}

	//�����Ŀ��ֵ����mΪ����
	if (arr[m] > x)
	{
		return half_search(arr, x, m, end);
	}

	//�����Ŀ��ֵС����mΪ��β
	if (arr[m] < x)
	{
		return half_search(arr, x, start, m);
	}
}