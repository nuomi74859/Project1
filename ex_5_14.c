#include<stdio.h>
#include<math.h>
int main()
{
	float fx(float x),x1,x2;
	x1=1.5;
	for(int i=0;i<10;i++)
	{
		x2=fx(x1);
		/*if(x1-x2<1E-10&&x1-x2>-1E-10)
		{
			printf("x=%f\n",x2);
			break;
		}*/
		printf("x=%f\n",x2);
		x1=x2;
	}
	return 0;
}

float fx(float x)
{
	float re;
	re = x-(2*pow(x,3)-4*pow(x,2)+3*x-6)/(6*pow(x,2)-8*x+3);
	return re;
}