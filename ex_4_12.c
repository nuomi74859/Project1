//Բ�εķ���Ϊ��((x - a)*(x - a) + (y - b)*(y - b) <= r * r)��a,bΪԲ�����꣬rΪ�뾶
#include<stdio.h>
int main()
{
	int judge_high(float x, float y, float a, float b, float r);
	float x, y, a, b, r = 1;
	puts("����������x,y��\n");
	scanf_s("%f,%f", &x, &y);
	if (x == 0 || y == 0)
		puts("�߶�Ϊ0\n");
	if (x > 0)
		a = 2;
	if (x < 0)
		a = -2;
	if (y > 0)
		b = 2;
	if (y < 0)
		b = -2;
	if (judge_high(x, y, a, b, r))
		puts("�߶�Ϊ10��\n");
	else
		puts("�߶�Ϊ0\n");
	system("pause");
	return 0;
}

int judge_high(float x, float y, float a, float b, float r)
{
	if ((x - a)*(x - a) + (y - b)*(y - b) <= r * r)
		return 1;
	else
		return 0;
}