#include<stdio.h>
#include<math.h>
int main()
{
	//r为圆半径，h为圆柱高，c为圆周长，s1为圆面积，s2为圆球表面积，v1为圆球体积，v2为圆柱体积，q为圆周率
	float r, h, c, s1, s2, v1, v2, q;
	printf("请输入r,h,q:\n");
	scanf_s("%f,%f,%f", &r, &h, &q);
	c = 2 * q*r;
	s1 = q * r*r;
	s2 = 4 * q*r*r;
	v1 = 4 / 3 * q*r*r*r;
	v2 = s1 * h;
	printf("周长为：%.2f，圆面积为：%.2f，圆球表面积为：%.2f，圆球体积为：%.2f，圆柱体积为：%.2f\n", c, s1, s2, v1, v2);
	system("pause");
	return 0;

}