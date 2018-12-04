#include <stdio.h>
int main()
{
	int i = 100, m = 1;
	while (i <= 200)
	{
		int j = 2;
		while (j <= (i / 2))
		{
			//printf("j = %d\n", j);
			if (i % j == 0)
				m = 0;
			j++;
		}
		if (m != 0)
			printf("i = %d\n", i);
		else
			m = 1;
		i++;
	}
	system("pause");
	return 0;
}