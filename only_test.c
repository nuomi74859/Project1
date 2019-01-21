#include<stdio.h>
#include<math.h>
int main()
{
	float a,t=0;
	for (int i = 0; i < 100 && t <= 100; i++)
	{
		printf("%d次捐款数目：\n", i+1);
		scanf_s("%f", &a);
		t += a;
	}
	printf("总捐款数：%f\n", t);
	system("pause");
	return 0;
}