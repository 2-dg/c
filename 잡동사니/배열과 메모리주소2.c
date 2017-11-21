#include<stdio.h>
#define SIZE 5
void printf_address(double* array3);
void printf_val(double* array3);
int main(void) {
	char array[SIZE] = { 'A', 'B', 'C', 'D', 'E' };
	double array3[SIZE] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("array[%d]주소 = %d    %d \n", i, &array[i], array + i);
	}
	for (i = 0; i < SIZE; i++) {
		printf("array[%d]의 값 = %d    %d \n", i, array[i], *(array + i));
	}
	printf_address(array3);
	printf_val(array3);
	return 0;
}
void printf_address(double* array3) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("array3[%d]번지는 = %d   %d \n", i, &array3[i], array3 + i);
	}
}
void printf_val(double* array3) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("array3[%d]번지 값은 = %lf   %lf \n", i, array3[i], *(array3 + i));
	}
}