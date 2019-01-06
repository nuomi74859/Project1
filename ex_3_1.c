#include<stdio.h>
#include<math.h>
int main()
{
	float r;
	int year;
	printf("please input r and year:\n");
	scanf_s("%f,%d",&r,&year);
	printf("the number are:%f",pow((1+r),year));

	system("pause");
	return 0;
}