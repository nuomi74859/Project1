#include<stdio.h>
int main()
{
	char A = 'A', W = 'W', Z = 'Z', a = 'a', w = 'w', z = 'z', c=' ';
	for (; (c = getchar()) != '\n';)
	{
		//c = getchar();
		//putchar(c);
		if ((c >= A && c <= Z) || (c >= a && c <= z))
		{
			if (c >= W && c <= Z || c >= w && c <= z)
				c -= 22;
			else
				c += 4;
			putchar(c);
		}

	}
	putchar('\n');
	system("pause");
	return 0;
}