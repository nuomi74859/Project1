#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	scanf_s("%c%c%c%c%c",&c1,1,&c2,1,&c3,1,&c4,1,&c5,1);
	c1 += 4;
	c2 += 4;
	c3 += 4;
	c4 += 4;
	c5 += 4;
	printf("the char are:%d,%d,%d,%d,%d\n", c1, c2, c3, c4, c5);
	printf("the char are:%c%c%c%c%c\n", c1, c2, c3, c4, c5);
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
	system("pause");
	return 0;
}