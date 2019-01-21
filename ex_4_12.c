//圆形的方程为：((x - a)*(x - a) + (y - b)*(y - b) <= r * r)，a,b为圆心坐标，r为半径
#include<stdio.h>
int main()
{
	int judge_high(float x, float y, float a, float b, float r);
	float x, y, a, b, r = 1;
	puts("请输入坐标x,y：\n");
	scanf_s("%f,%f", &x, &y);
	if (x == 0 || y == 0)
		puts("高度为0\n");
	if (x > 0)
		a = 2;
	if (x < 0)
		a = -2;
	if (y > 0)
		b = 2;
	if (y < 0)
		b = -2;
	if (judge_high(x, y, a, b, r))
		puts("高度为10米\n");
	else
		puts("高度为0\n");
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