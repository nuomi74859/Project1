//将华氏度转化为摄氏度，转化公式为：c=（5/9）×（f-32）
#include<stdio.h>

int main()
{
	float f, c;
	printf("Please input the F:\n");
	//浮点型定义为float，double为双精度，scanf输入和printf输出时float为%f,double为%lf
	scanf_s("%f",&f);
	printf("F is %f\n",f);
	c = 5 * (f - 32) / 9;
	printf("The F is %f\n The C is %f\n",f,c);
	system("pause");
	return 0;
}