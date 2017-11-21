#include<stdio.h>
#define SIZE 9
void input_dan(int* dan);
void array_dan(int dan, int* gudan);
void print_dan(int dan, int* gudan);
//int num[SIZE];도 가능하지만 잘 쓰진 않음
int main(void) {
	int gugudan[SIZE] = { 0, };
	int dan = 0, i=1;
	input_dan(&dan);
	array_dan(dan, gugudan);
	print_dan(dan, gugudan);
	return 0;
}
void input_dan(int dan) {
	printf("원하는 단을 입력하시오 : ");
	scanf("%d", dan);                               //3열에서 포인터로 선언했기 때문에 여기에선 그냥 dan으로 받아야함.
}													//dan자체가 주소를 의미하기 때문
void array_dan(int dan, int* gudan) {
	int i = 0;
	for (i = 1; i < 10; i++) {
		gudan[i] = dan*i;
	}
}
void print_dan(int dan, int* gudan) {
	int i = 0;
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d \n", dan, i, gudan[i]);
	}
}