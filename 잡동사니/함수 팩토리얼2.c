#include<stdio.h>
int recr(int i);
int main(void) {
	int sum = 0, n = 5;
		sum = recr(n);
	printf("%d팩토리얼의 값은 %d", n, sum);
	return 0;
}
int recr(int n) {
	int i = 0, sum = 1;
	for (i = 0; i < n; i++) {
		sum *= n - i;
	}
	return sum;
}