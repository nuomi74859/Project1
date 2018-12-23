//求三角形面积公式
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	//先求三角形半周长
	p = (a+b+c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%f\n", area);

}