//������ѧ�ж������������׹�ʽ
#include<stdio.h>
#include<math.h>
int main()
{
	float m, d, p, r;
	printf("������d�����p����r������:\n");
	scanf_s("%f,%f,%f",&d,&p,&r);
	m = log(p / (p - d * r)) / log(1 + r);
	printf("��������Ϊ��%.1f\n",m);
	system("pause");
	return 0;
}