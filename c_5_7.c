#include<stdio.h>
#include<math.h>
int main()
{
	double PI, m = 0;
	//ע��forѭ���е��ж���������ʹ��1/ʱ��1Ϊint�ͣ��ᵼ�±��ʽΪint��Ϊ0�Ӷ����½������
	for (int i = 1;pow(2*i-1,-1)>=pow(10,-6); i++)
	{
		m += pow(-1, i - 1) * 1 / (2 * i - 1);
		//printf("%f\n", m);
	}
	PI = m * 4;
	printf("PIΪ��%10.8f\n", PI);
	system("pause");
	return 0;
}