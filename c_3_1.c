//�����϶�ת��Ϊ���϶ȣ�ת����ʽΪ��c=��5/9������f-32��
#include<stdio.h>

int main()
{
	float f, c;
	printf("Please input the F:\n");
	//�����Ͷ���Ϊfloat��doubleΪ˫���ȣ�scanf�����printf���ʱfloatΪ%f,doubleΪ%lf
	scanf_s("%f",&f);
	printf("F is %f\n",f);
	c = 5 * (f - 32) / 9;
	printf("The F is %f\n The C is %f\n",f,c);
	system("pause");
	return 0;
}