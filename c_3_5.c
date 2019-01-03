//计算一元二次方程的解
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,p;
	printf("please input a,b,c\n");
	scanf_s("%f,%f,%f",&a,&b,&c);
	p = b*b - 4*a*c;
	if(p>=0)
	{
		x1 = (-b+sqrt(p))/(2*a);
		x2 = (-b-sqrt(p))/(2*a);
		printf("x1=%7.3f,x2=%7.2f\n",x1,x2 );
	}
	else
	{
		printf("have no truce\n");
	}
	system("pause");
	return 0;
}