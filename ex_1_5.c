#include <stdio.h>
int main()
{
	int n;
	for (int i = 0; i < 4; i++)
	{
		for (int x = 0; x < i; x++)
		{
			printf(" ");
		}
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}