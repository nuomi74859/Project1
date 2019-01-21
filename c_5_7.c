#include<stdio.h>
#include<math.h>
int main()
{
	double PI, m = 0;
	//注意for循环中的判断条件，当使用1/时，1为int型，会导致表达式为int型为0从而导致结果出错
	for (int i = 1;pow(2*i-1,-1)>=pow(10,-6); i++)
	{
		m += pow(-1, i - 1) * 1 / (2 * i - 1);
		//printf("%f\n", m);
	}
	PI = m * 4;
	printf("PI为：%10.8f\n", PI);
	system("pause");
	return 0;
}