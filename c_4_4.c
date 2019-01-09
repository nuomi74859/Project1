#include<stdio.h>
int main() 
{
	char x;
	int a = 'A' - 'a';
	scanf_s("%c", &x, 1);
	x >= 'A' && x <= 'Z' ? putchar(x -= a) : putchar(x);
	system("pause");
	return 0;
}