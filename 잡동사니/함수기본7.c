#include<stdio.h>
void inform(void);
int input_num(void);
int for_sum(int a);
int main(void) {
	int num = 0, result = 0;
	inform();
	num = input_num();
	result = for_sum(num);
	printf("1���� %d������ �� : %d \n", num, result);
	return 0;
}
void inform(void) {
	printf("--------------\n");
	printf("-���α׷� ����-\n");
	printf("--------------\n");
}
int input_num(void) {
	int a;
	printf("���� �� �� �� �Է� : ");
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