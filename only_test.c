#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	a = 5;
	b = 3;
	b += ++a + b;
	printf("a=%d,b=%d\n", a,b);
	//system("pause");
	return 0;
}