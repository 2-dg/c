#include<stdio.h>
void func1(int* array1, int size);
void func2(int (*array2)[2], int row, int col);
int main(void) {
	int array1[] = { 1,2,3,4 };
	int array2[][2] = { 5,6,7,8 };
	func1(array1,sizeof(array1)/sizeof(array1[0]));
	func2(array2, sizeof(array2) / sizeof(array2[0]), sizeof(array2[0]) / sizeof(array2[0][0]));
	return 0;
}
void func1(int* array1, int size) {
	int i = 0;
	for (i=0;i<size;i++) {
		printf("%d  ", array1[i]);
	}
	printf("\n");
}
void func2(int(*array2)[2], int row, int col) {
	int i = 0, j=0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d  ", array2[i][j]);
		}
	}
	printf("\n");
}