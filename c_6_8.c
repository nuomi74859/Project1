//输入一行字符，计算单词个数，单词用空格间隔开

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100]="\0";
	int str_num(char *x);
	puts("请输入一行字符：");
	gets(a);

	printf("个数为：%d\n",str_num(a));
	return 0;
}

int str_num(char *x)
{
	int num = 0, y = 0;
	char t = ' ';
	for(int i = 0; i < strlen(x) + 1; i++)
	{
		if(y == 0 && x[i] != t)
		{
			y = 1;
		}
		if((x[i] == ' ' || x[i] == '\0') && y == 1)
		{
			num++;
			y = 0;
		}

	}
	return num;
}