//ɸ������������ѡ���ݷ�Χ���������Ȧ��������Χ�����ݿ����ı���ɹ��������ʣ��Ϊ����

#include<stdio.h>
#include<math.h>
#define NUM 101

int main()
{
	int a[NUM];
	//�����ʼ��
	for (int i = 0; i < NUM; i++)
	{
		a[i] = 1;
	}

	for (int i = 2; i < sqrt(NUM); i++)
	{
		int iSta = 1;
		for (int j = i + 1; j < sqrt(i); j++)
		{
			if (j%i == 0)
			{
				iSta = 0;
				break;
			}
		}
		if (iSta == 1)
		{
			for (int m = 2; i*m < NUM; m++)
			{
				a[i*m] = 0;
			}
		}
	}
	puts("ɸѡ������Ϊ��");
	for (int i = 2; i < NUM; i++)
	{
		if (a[i] == 1)
		{
			printf("%d\n", i);
		}
	}
	getchar();
	return 0;
}