#include<stdio.h>
int main()
{
	int n = 1E3;
	for (int i = 1; i < n; i++)
	{
		int tm = 0;
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
				tm += j;
		}
		if (i == tm)
		{
			printf("%d its factors are",i);
			for (int j = 1; j < i; j++)
			{
				if (i%j == 0)
					printf(" %d ",j);
			}
			putchar('\n');
		}
	}
	system("pause");
	return 0;
}