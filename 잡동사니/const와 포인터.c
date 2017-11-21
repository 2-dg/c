#include<stdio.h>
int main(void) {
	int b = 20;
	int a = 10;
	int* const p = &a;
	*p = 30;
	//p = &a;는 안 됨
	//이건 포인터p(p주소)만 상수화시킨 것이기 때문에 *p에는 30이 들어가고
	printf("%d \n", a);
	const int* q = &a;
	q = &b;
	//*q = 30;는 안 됨
	//이건 주어진 값을 상수화 했기 때문에 &a주소가 들어가있는 q에 새로 &b가 들어갈 수 있는 것.
	printf("%d %d %d \n", *q, b, a);
	//완전상수화
	const int* const m = &a;
	//*m = 30;
	//m = &b;
	//이렇게 해야 둘 다 변경이 안됨.
	return 0;
}