#include<stdio.h>
#include<math.h>
//#include<string.h>
int max;
int main()
{
	char a[200]="aaaaaaa";
	char b[13]="bbb";
	//putchar(a);
	//scanf_s("%d", a);
	//gets(a);
	//har a[10] = "china\n";
	//scanf_s("%s",a,10);
	//scanf_s("%s", b, 10);
	//gets(a);
	//gets(b);
	//gets(b);
	//b = getchar();
	/*
	printf("%s\n",a);
	printf("%d\n", sizeof(a));
	printf("%d\n", strlen(a));
	*/
	/*
	for (int i = 0; a[i]!='\0'; i++)
	{
		printf("%d\n", a[i]);
	}
	*/
	//strcat(a, b);
	strcpy(a,b);
	for (int i = 0; i<10; i++)
	{
		printf("%d\n", a[i]);
	}
	//puts(a);
	//printf("%d\n", b);
	system("pause");
	return 0;
}