#include<stdio.h>
int count;
void print_array(int* parray);
int main(void) {
	int array[] = { 10,20,30,40,50 };
	void (*p)(int* parray);
	count = sizeof(array) / sizeof(array[0]);
	printf("%d \n", count);
	p = print_array;
	p(array);
	printf("\n");
	print_array(array);
	return 0;
}
void print_array(int* parray) {
	int i = 0;
	for (i = 0; i < count; i++) {
		printf("%d \t", parray[i]);
	}
}