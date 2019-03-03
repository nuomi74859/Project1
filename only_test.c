#include<stdio.h>
#include<math.h>
#include<string.h>
int max;
int main()
{
	char a[200]="ab\0cd";
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
	strlwr(a,b);
	//int x = strcmp(a,b);
	printf("x=%s\n",a);
	printf("len=%zd\n",strlen(b));

	//puts(a);
	//printf("%d\n", b);
<<<<<<< HEAD

	//system("pause");
=======
	system("pause");
>>>>>>> e4bd2c28c38a79b751a4711879a762ccd0679ec5
	return 0;
}