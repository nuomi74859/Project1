#include<stdio.h>
int main()
{
	int n, m;
	puts("«Î ‰»În£∫");
	scanf_s("%d", &n);
	m = n / 2;
	for (int i = 1; i <= m; i++)
	{
		for (int j = m - i; j > 0; j--)
		{
			putchar(' ');
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (int i = m-1; i >0; i--)
	{
		for (int j = m - i; j > 0; j--)
		{
			putchar(' ');
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}