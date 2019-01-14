#include<stdio.h>
int main()
{
	float a = 0.1, b = 0.075, c = 0.05, d = 0.03, e = 0.015, f = 0.01;
	float I, J;
	puts("请输入利润I：");
	scanf_s("%f", &I);
	I /= 10000;
	if (I <= 10)
		J = a * I;
	else if (I <= 20)
		J = b * I + 0.25;
	else if (I <= 40)
		J = c * I + 0.75;
	else if (I <= 60)
		J = d * I + 1.55;
	else if (I <= 100)
		J = e * I + 2.45;
	else
		J = f * I + 2.95;
	J *= 10000;
	printf("获得奖金总数为：%f\n", J);
	system("pause");
	return 0;
}