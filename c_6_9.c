//找出字符串最大数
#include<stdio.h>
#include<string.h>

int main()
{
	char a[3][100], b[100];
	for (int i = 0; i < 3; i++)
	{
		printf("请输入第 %d 个字符串：", i);
		gets(a[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		if (strcmp(a[i], a[i+1]) > 0)
		{
			strcpy_s(b, 100, a[i]);
			strcpy_s(a[i], 100,a[i + 1]);
			strcpy_s(a[i + 1], 100,b);
		}
	}
	printf("the max string:%s\n", a[2]);
	system("pause");
	return 0;
}