#include<stdio.h>
#include<stdlib.h>//atoi
#include<string.h>//strlen
#pragma warning(disable:4996)

//ある範囲(最小０、最大９）の一桁の整数が入力されたときはその値を返す。
//それ以外の数字や文字列が入力されたときは１０を返す

//int yomi(int x1, int x2);

int yomi(int x1, int x2)
{
	char a[100];
	int b;
			
	scanf("%s",&a);

	//fgets(a, sizeof(a), stdin);
	b = strlen(a);

	if (b == 1)
	{

		b = atoi(a);
		if (b >= x1 && b <= x2)
		{
			return (b);
		}

	}

	return 10;
		
}