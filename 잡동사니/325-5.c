#include<stdio.h>
void print_address(int p[][3]);
int main(void) {
	int array[2][3] = { 1,2,3,4,5,6 };
	print_address(array);
	return 0;
}
void print_address(int p[][3]) {
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
		{
			printf("array[%d][%d] = %d, ÁÖ¼Ò´Â %d\n", i, j, *(*(p + i) + j), (*(p + i) + j));
		}
	}
}