#include<stdio.h>
void inform();
int input_num();
int for_sum(int a);
int main() {
	int num = 0, result = 0;
	inform();
	num = input_num();
	result = for_sum(num);
	printf("%d", result);
	return 0;
}
void inform() {
	printf("-------------\n");
	printf("프로그램 시작\n");
	printf("-------------\n");
}
int input_num() {
	int a;
	printf("정수 값 한 개 입력 : ");
	scanf("%d", &a);
	return a;
}
int for_sum(int a) {
	int result = 0;
	for (a; a > 0; a--) {
		result += a;
	}
	return result;
}