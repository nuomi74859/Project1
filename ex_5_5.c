#include<stdio.h>
#include<math.h>
int main()
{
	int an(int a, int n);
	int sn = 0, a, n;
	puts("«Î ‰»Îa£¨n£∫");
	scanf_s("%d,%d", &a, &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", an(a, i));
		sn += an(a, i);
	}
	printf("snŒ™£∫%d\n", sn);
	system("pause");
	return 0;
}

int an(int a, int n)
{
	int re = 0;
	for (int i = 0; i < n; i++)
	{
		re += pow(10, i);
	}
	return re * a;
}