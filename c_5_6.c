#include<stdio.h>
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d\t", i*j);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}