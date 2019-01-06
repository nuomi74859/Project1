//高中数学中对数函数，换底公式
#include<stdio.h>
#include<math.h>
int main()
{
	float m, d, p, r;
	printf("请输入d贷款金额、p还款额、r月利率:\n");
	scanf_s("%f,%f,%f",&d,&p,&r);
	m = log(p / (p - d * r)) / log(1 + r);
	printf("还款月数为：%.1f\n",m);
	system("pause");
	return 0;
}