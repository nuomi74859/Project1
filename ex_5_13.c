//该题存疑，牛顿迭代法
#include<stdio.h>
#include<math.h>
int main()
{
	float new_ton(int n,float a),a;
	a=1;
	for(int i=2;;i++)
	{
		float x1=new_ton(i,a),x0=new_ton(i-1,a);
		float j = x1-x0;
		if(j<1E-5&&j>-1E-5)
		{
			printf("re:%f,n:%d\n",x1,i);
			break;
		}
	}
	return 0;
}

float new_ton(int n,float a)
{
	float re;
	if(n==1)
		re = sqrt(a);
	else
		re = 1/2*(new_ton(n-1,a)+a/new_ton(n-1,a));
	return re;
}