//����쳲���������
#include<stdio.h>
int main()
{
	int n;
	int fibo(int n);
	puts("������쳲�������������n��\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("��%d��Ϊ��%d\n",i,fibo(i));
	}
	system("pause");
	return 0;
}

//�ݹ�
int fibo(int n)
{
	int fn;
	if (n == 1 || n == 2)
		fn = 1;
	else
		fn = fibo(n - 1) + fibo(n - 2);
	return fn;
}