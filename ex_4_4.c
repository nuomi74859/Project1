#include<stdio.h>
int main()
{
	int a, b, c, max;
	puts("Please input three numbers:");
	scanf_s("%d,%d,%d", &a, &b, &c);
	//��ע�⣬��ֵ�������ȼ�С���������㣬�������Żᵼ�±������ʽ�����ǿ��޸ĵ���ֵ��
	(a >= b) ? (max = a) : (max = b);
	(max >= c) ? printf("the max is %d\n", max) : printf("the max is %d\n", c);
	system("pause");
	return 0;
}