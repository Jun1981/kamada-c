#include<stdio.h>
#include<stdlib.h>

void main (void)
{

	char str0[7];
	int tax;

	printf("金額を入力してください：");
	
	gets(str0);
	
	tax = atoi(str0) * 5/100;
	printf("入力された金額に対する消費税は%d円です。\n",tax);
}