#include<stdio.h>
#include<math.h>
#include<string.h>
int max;
int main()
{
	char a[200]="aB\0cd";
	char b[10]="b";
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
	//strcat(a,b);
	//_strlwr(a);
	//strlwr(b);
	//int x = strcmp(a,b);
	printf("x=%s\n",a);
	printf("len=%zd\n",strlen(b));

	//puts(a);
	//printf("%d\n", b);

	//system("pause");
	return 0;
}