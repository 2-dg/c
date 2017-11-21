#include<stdio.h>
int fecto(int n) {
	if (n == 1) {
		return 1;
	}else {
		return n*fecto(n - 1);
	}
}
int main(void) {
	int n = 5, sum = 0;
	sum = fecto(n);
	printf("%d의 팩토리얼은 %d",n, sum);
	return 0;
}