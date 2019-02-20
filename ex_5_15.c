//二分法求根
#include<stdio.h>
int main()
{
	float func(float x);
	float a = -10, b = 10, c;
	c = (a + b) / 2;
	for (;func(c)!=0;)
	{
		if (func(a)*func(c) < 0)
		{
			b = c;
		}
		else
			a = c;
		c = (a + b) / 2;
	}
	printf("c=%f\n", c);
	system("pause");
	return 0;
}

float func(float x)
{
	return 2 * x*x*x - 4 * x*x + 3 * x - 6;
}