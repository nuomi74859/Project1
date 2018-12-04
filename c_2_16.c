#include <stdio.h>
int main()
{
	int i = 1, j = 2;
	while (j <= 5) {
		i = i * j;
		j++;
	}
	printf("i=%d\n",i);
	system("pause");
	return 0;
}