#include<stdio.h>
int main()
{
	int num_en = 0, num_spance = 0, num_int = 0, num_other = 0;
	for (char c; (c = getchar()) != '\n';)
	{
		if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
			num_en++;
		else if (c == 32)
			num_spance++;
		else if (c >= 48 && c <= 57)
			num_int++;
		else
			num_other++;
	}
	printf("Ӣ���ַ�����%d\n�ո�����%d\n��������%d\n�����ַ�����%d\n", num_en, num_spance, num_int, num_other);
	system("pause");
	return 0;
}