#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rand_value(int* count);
void print_array(int* count, int size);
void max_array_print(int* count, int size);
int main(void) {
	int i = 0, num = 0, max = 0, index = 0;
	int count[10] = { 0, };
	rand_value(count);
	print_array(count, sizeof(count) / sizeof(count[0]));
	printf("\n\n");
	max_array_print(count, sizeof(count) / sizeof(count[0]));
	return 0;
}
void rand_value(int* count) {
	int i = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++) {
		count[rand() % 10]++;
	}
}
void print_array(int* count, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d이 나온 횟수 = %d \n", i, count[i]);
	}
}
void max_array_print(int* count, int size) {
	int max = 0, i = 0, index = 0;
	max = count[0];
	for (i = 0; i < size; i++) {
		if (max < count[i]) {
			max = count[i];
			index = i;
		}
	}
	printf("%d가 가장 많이 나왔고 %d번 호출됐습니다.\n", index, max);
}