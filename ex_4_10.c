#include<stdio.h>
int main()
{
	//float a = 0.1, b = 0.075, c = 0.05, d = 0.03, e = 0.015, f = 0.01;
	float I;
	float ifelse_bonus(float I), switch_bonus(float I);
	do {
		puts("请输入利润I：");
		scanf_s("%f", &I);

		printf("ifelse获得奖金总数为：%f\n", ifelse_bonus(I));
		printf("switch获得奖金总数为：%f\n", switch_bonus(I));
	} while (1);
	system("pause");
	return 0;
}

float ifelse_bonus(float I)
{
	float J;
	float a = 0.1, b = 0.075, c = 0.05, d = 0.03, e = 0.015, f = 0.01;
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
	return J;
}

float switch_bonus(float I)
{
	int i;
	float J;
	float a = 0.1, b = 0.075, c = 0.05, d = 0.03, e = 0.015, f = 0.01;
	I /= 10000;
	i = I / 10;
	switch (i)
	{
		case 0:J = a * I; break;
		case 1:J = b * I + 0.25; break;
		case 2:
		case 3:J = c * I + 0.75; break;
		case 4:
		case 5:J = d * I + 1.55; break;
		case 6:
		case 7:
		case 8:
		case 9:J = e * I + 2.45; break;
		default:J = f * I + 2.95;
	}	
	J *= 10000;
	return J;
}