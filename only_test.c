#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	a = 6;
	b = 3;
	c = a > b > 1;
	switch (a)
	{
		case 5:putchar('a'); ;
		case 6:putchar('b'); ;
		case 7:putchar('c'); ;
		default:putchar('n');
	}
	system("pause");
	return 0;
}