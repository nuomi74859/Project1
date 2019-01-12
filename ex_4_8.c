#include<stdio.h>
int main()
{
	float grade;
	char lev;
	const int a = 90, b1 = 80, b2 = 89, c1 = 70, c2 = 79, d1 = 60, d2 = 69, e = 59;
	puts("Please input grade:");
	scanf_s("%f", &grade);
	if (grade >= a)
		lev = 'A';
	else if (grade >= b1 && grade <= b2)
		lev = 'B';
	else if (grade >= c1 && grade <= c2)
		lev = 'C';
	else if (grade >= d1 && grade <= d2)
		lev = 'D';
	else
		lev = 'E';
	puts("the level is:");
	putchar(lev);
	system("pause");
	return 0;
}