#include<stdio.h>
struct point {
	int x, y;
};
struct student {
	int x, y;
};
int main(void) {
	struct point p1 = { 10,20 };
	struct point p2 = { 0, };
	struct student p3 = { 0, };
	printf("%d, %d\n", p1.x, p1.y);
	printf("%d, %d\n\n", p2.x, p2.y);

	p2 = p1;

	printf("%d, %d\n", p1.x, p1.y);
	printf("%d, %d\n\n", p2.x, p2.y);

	//여기에서 오류 발생 p3 = p1. 구조체명이 다르므로.

	printf("%d, %d\n", p1.x, p1.y);
	printf("%d, %d\n\n", p3.x, p3.y);

}