#include<stdio.h>
int main()
{
	int a, b, c, max;
	puts("Please input three numbers:");
	scanf_s("%d,%d,%d", &a, &b, &c);
	//需注意，赋值运算优先级小于条件运算，不加括号会导致报错“表达式必须是可修改的左值”
	(a >= b) ? (max = a) : (max = b);
	(max >= c) ? printf("the max is %d\n", max) : printf("the max is %d\n", c);
	system("pause");
	return 0;
}