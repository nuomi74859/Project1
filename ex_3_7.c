#include<stdio.h>
#include<math.h>
int main()
{
	//rΪԲ�뾶��hΪԲ���ߣ�cΪԲ�ܳ���s1ΪԲ�����s2ΪԲ��������v1ΪԲ�������v2ΪԲ�������qΪԲ����
	float r, h, c, s1, s2, v1, v2, q;
	printf("������r,h,q:\n");
	scanf_s("%f,%f,%f", &r, &h, &q);
	c = 2 * q*r;
	s1 = q * r*r;
	s2 = 4 * q*r*r;
	v1 = 4 / 3 * q*r*r*r;
	v2 = s1 * h;
	printf("�ܳ�Ϊ��%.2f��Բ���Ϊ��%.2f��Բ������Ϊ��%.2f��Բ�����Ϊ��%.2f��Բ�����Ϊ��%.2f\n", c, s1, s2, v1, v2);
	system("pause");
	return 0;

}