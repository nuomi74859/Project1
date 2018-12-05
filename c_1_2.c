#include <stdio.h>
int main()
{
	int a, b;
	int sum(int x, int y);
	//新的标准对scanf进行了调整，安全起见需使用scanf_s
	scanf_s("%d,%d", &a, &b);
	printf("The sum is %d\n",sum(a, b));
	//需要增加系统暂停代码，否则连接生成后的程序一闪而过
	system("pause");
	return 0;
}

int sum(int x, int y)
{
	int z;
	z = x + y;
	return z;
}