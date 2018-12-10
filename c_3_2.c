//¼ÆËã±¾Ï¢
#include<stdio.h>
int main()
{
	float r, r1, r2, r3;
	char x[] = "aaa";
	printf("%s",x);
	printf("Please input r,r1,r2,r3\n");
	scanf_s("%f,%f,%f,%f",&r,&r1,&r2,&r3);
	printf("the plan A are:%f\n the plan B are:%f\n the plan C are:%f\n",r*(1+r1),r*(1+r2),r*(1+r3/2)*(1+r3/2));
	system("pause");
	return 0;
}