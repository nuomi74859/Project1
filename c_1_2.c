#include <stdio.h>
int main()
{
	int a, b;
	int sum(int x, int y);
	//�µı�׼��scanf�����˵�������ȫ�����ʹ��scanf_s
	scanf_s("%d,%d", &a, &b);
	printf("The sum is %d\n",sum(a, b));
	//��Ҫ����ϵͳ��ͣ���룬�����������ɺ�ĳ���һ������
	system("pause");
	return 0;
}

int sum(int x, int y)
{
	int z;
	z = x + y;
	return z;
}