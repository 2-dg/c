#include<stdio.h>
int main()
{
	int a=0,r=0;
	printf("네자리 이진수를 입력하세요 : ");
	scanf("%d", &a);

	r = (a % 10000 >= 1000) ? (r + 8) : (r + 0);
	r = (a % 1000 >= 100) ? (r + 4) : (r + 0);
	r = (a % 100 >= 10) ? (r + 2) : (r + 0);
	r = (a % 10 >= 1) ? (r + 1) : (r + 0);

	printf("십진수로 %d입니다.\n", r);
	return 0;
}