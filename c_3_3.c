//大写转小写输出
#include<stdio.h>
int main()
{
	//计算大小写的差值
	int num = 'a' - 'A';
	char ul;
	printf("Please input:");
	scanf_s("%c",&ul);
	printf("The ll is:%c\n",ul+num);
	system("pause");
	return 0;
}