#include<stdio.h>
int main(void) {
	int num[8] = { 1,2,3,4,5,6,7,8 };
	int temp = 0, size = 0;
	int i = 0;
	size = sizeof(num) / sizeof(num[0]);
	temp = num[size - 1];
	for (i = 0; i < size; i++) {
		printf("%d  ", num[i]);
	}
	for (i = 0; i < size-1; i++) {
		num[7-i] = num[6-i];
	}
	printf("\n");

	num[0] = temp;
	for (i = 0; i < size; i++) {
		printf("%d  ", num[i]);
	}
	return 0;
}