#include <stdio.h>
int main()
{
	double i = 1, j = 2, n = -1;
	while (j <= 3) 
	{
		i = i + 1 / ( n * j );
		n = n * n;
		j = j + 1;
	}
	printf("i = %f\n",i);
	system("pause");
	return 0;
}