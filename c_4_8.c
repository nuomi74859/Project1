#include<stdio.h>
int main()
{
	int year;
	do {
		puts("please input the year:");
		scanf_s("%d", &year);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("%d ������\n", year);
		}
		else
			printf("%d ��������\n", year);
		//system("pause");
	} while (1);
	
	return 0;
}