#include<stdio.h>
#define SIZE 3
void print_int(int* p);
void print_array(int* p);
int main(void) {
	int k[SIZE] = { 10, 20, 30 };
	int m[2][4] = { 0, };
	int a = 11;
	int* p = NULL;
	p = &a;
	printf("p  = %d\n", p);
	printf("&a = %d\n", &a);
	printf("a = \t\t%d\n", a);						//번지전달방식(콜바이어드레스 방식)
													//함수 포인터변수 선언 -> 메인 안에서 주소를 부름
	print_int(&a);									//함수 안에서는 주소가 간 것이므로 관계연산자를 붙이거나
	print_array(k);									//배열0을 붙여야 값이 출력.(그냥p를찍으면 주소출력)
	printf("main k[%d] = %d \n", 2, k[2]);
	printf("sizeof(k) = %d, k배열의 개수 = %d\n",sizeof(k), sizeof(k)/sizeof(k[0]));
	printf("sizeof(m) = %d, m배열의 개수 = %d\n", sizeof(m), sizeof(m) / sizeof(m[0][0]));
	printf("m열배열의 개수 =  %d, m행배열의 개수 = %d\n", sizeof(m[0])/sizeof(m[0][0]), sizeof(m) / sizeof(m[0]));
	printf("main의 번지 = %d \n", main);			
	
	return 0;
}
void print_int(int* p) {
	printf("*p = *(p+0) = \t%d\n", *p);
	printf("p[0] = \t\t%d\n", p[0]);
}
void print_array(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("k[%d] = %d \n", i, p[i]);
	}
	p[2] = 200;
}