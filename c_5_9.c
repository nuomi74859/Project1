//�ж��Ƿ�Ϊ����
#include<stdio.h>
#include<math.h>
int main()
{
	int n, status = 0;
	puts("������һ������3��������");
	scanf_s("%d", &n);
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			status = 1;
			break;
		}
	}
	if (status)
		puts("��������");
	else
		puts("������");
	system("pause");
	return 0;
}