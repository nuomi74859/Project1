#include<stdio.h>
#include<math.h>

int main()
{
	int quadratic_equation();
	quadratic_equation();
	system("pause");
	return 0;
}

int quadratic_equation()
{
	int a, b, c;
	//�Կ����Ĳ����趨�帡����
	double x1, x2, r;
	printf("Please int the quadratic equation's a,b,c:\n");
	scanf_s("%d,%d,%d",&a,&b,&c);
	r = b * 2 - 4 * a * c;
	printf("r=%f\n",r);
	r = sqrt(r);
	printf("r=%f\n", r);
	x1 = (-b + r) / (2 * a);
	x2 = (-b - r) / (2 * a);
	//ע�������ʹ�ø�����
	printf("x1=%f,x2=%f\n",x1,x2);
	return 0;

}