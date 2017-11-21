//피보나치 패턴
//0 1 1 2 3 5 8 13 21 ...
#include<stdio.h>
int main(void) {
	double a = 0.0, b = 1.0, c = 1.0;
	int i = 0.0, n = 0;
	//printf("f%d번 : %d \n",0, a);
	//printf("f%d번 : %d \n",1, b);
	printf("몇 번째 피보나치 수열을 출력 : ");
	scanf("%d", &n);
	for (i=2;1;i++) {
		a = b, b = c, c = a + b;
		if (i == n) {
			printf("f%d번 : %.lf \n", i, c);
		}
	}
	return 0;
}