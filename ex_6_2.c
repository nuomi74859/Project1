//选择法进行排序，降序，关键在于将哪个位置设为头
#include<stdio.h>
#define dataN  10
int main()
{
	//const int dataN = 10;
	int num[dataN] = { 4,3,2,1,5,6,7,8,9,10 };
	int t, dt;
	puts("转换前：");
	for (int i = 0; i < dataN; i++)
	{
		printf("%d\n", num[i]);
	}

	for (int i = 0; i < dataN-1; i++)
	{
		t = i;
		for (int j = i+1; j < dataN; j++)
		{
			if (num[t] < num[j])
				t = j;
		}
		dt = num[t];
		num[t] = num[i];
		num[i] = dt;
	}

	puts("转换后：");
	for (int i = 0; i < dataN; i++)
	{
		printf("%d\n", num[i]);
	}
	getchar();
	return 0;
}