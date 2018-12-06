//计算范围内的闰年
#include<stdio.h>
int main()
{
	int year_begin, year_end, n;
	n = 0;
	printf("Please input the year begin and end:begin,end\n");
	scanf_s("%d,%d",&year_begin, &year_end);
	for (n = year_begin; n <= year_end; n++)
	{
		if (n % 4 == 0 && n % 100 != 0)
			printf("%d\n",n);
		if (n % 100 == 0 && n % 400 == 0)
		{
			printf("%d\n",n);
		}
	}
	system("pause");
	return 0;
	
}