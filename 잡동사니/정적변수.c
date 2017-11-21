#include<stdio.h>
void count(void);
int a; //int=x
int main(void) {
	count();
	count();
	count();
	return 0;
}
void count(void) {
	static int x = 0; //정적변수. 함수가 끝나도 값이 누적됨.
	int y = 0;
	x++;
	y++;
	a++;
	printf("%d %d %d\n", x, y, a);
}