//7-286 - 13 순열
#include<stdio.h>
int main(void) {
	int n = 100, r = 50, i = 0; double sum = 1.0;
	for (i = n; i>=(n-r-1);i--) {
		sum *= i;
	}
	printf("%d부터 %d까지의 곱은 %e",n, r, sum);
return 0;
}