#include<stdio.h>
int main()
{

	int n1 = 100, n2 = 50, n3 = 10;
	double s1 = 0, s2 = 0, s3 = 0;
	for (int i = 1; i <= n1; i++)
	{
		s1 += i;
	}
	for (int i = 1; i <= n2; i++)
	{
		s2 += i*i;
	}
	for (int i = 1; i <= n3; i++)
	{
		s3 += 1/i;
	}
	printf("s1=%f\ns2=%f\ns3=%f\n", s1, s2, s3);
	system("pause");
	return 0;
}
