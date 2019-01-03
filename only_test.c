#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	a = 5;
	b = 3;
	b += ++a + b++ +10000000;
	double c = 1.0;
	printf("a=%10d\nb=%0d\nc=%10.1f%%\n%c\n", a,b,c/3,getchar());
	system("pause");
	return 0;
}