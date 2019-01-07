#include<stdio.h>
int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	printf("please input a,b,x,y,c1,c2:\n");
	//在使用scanf_s时，对%c需要带上位数参数，否则报错
	scanf_s("%d,%d,%f,%f,%c,%c",&a,&b,&x,&y,&c1,1,&c2,1);
	printf("a=%d,b=%d,x=%.1f,y=%.2f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
	system("pause");
	return 0;
}