//7-286 - 13 ����
#include<stdio.h>
int main(void) {
	int n = 100, r = 50, i = 0; double sum = 1.0;
	for (i = n; i>=(n-r-1);i--) {
		sum *= i;
	}
	printf("%d���� %d������ ���� %e",n, r, sum);
return 0;
}