//��дתСд���
#include<stdio.h>
int main()
{
	//�����Сд�Ĳ�ֵ
	int num = 'a' - 'A';
	char ul;
	printf("Please input:");
	scanf_s("%c",&ul);
	printf("The ll is:%c\n",ul+num);
	system("pause");
	return 0;
}