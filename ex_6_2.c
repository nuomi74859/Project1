//ѡ�񷨽������򣬽��򣬹ؼ����ڽ��ĸ�λ����Ϊͷ
#include<stdio.h>
#define dataN  10
int main()
{
	//const int dataN = 10;
	int num[dataN] = { 4,3,2,1,5,6,7,8,9,10 };
	int t, dt;
	puts("ת��ǰ��");
	for (int i = 0; i < dataN; i++)
	{
		printf("%d\n", num[i]);
	}

	for (int i = 0; i < dataN-1; i++)
	{
		t = i;
		for (int j = i+1; j < dataN; j++)
		{
			if (num[t] < num[j])
				t = j;
		}
		dt = num[t];
		num[t] = num[i];
		num[i] = dt;
	}

	puts("ת����");
	for (int i = 0; i < dataN; i++)
	{
		printf("%d\n", num[i]);
	}
	getchar();
	return 0;
}