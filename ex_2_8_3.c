//����10������������һ���� 
#include<stdio.h>
int main()
{
	void max();
	max();
	system("pause");
	return 0;
}

void max()
{
	//ע�⣬��������ʱ�������±�Ϊ������ʵ���±�Ϊn-1
	int a[10], max;
	printf("Please input ten numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d",&a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max) 
		{
			max = a[i];
		}
	}
	printf("The max is %d\n",max);
}