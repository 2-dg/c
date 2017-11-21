#include<stdio.h>
int recr(int i);
int main(void){
	int i = 5, sum=0, i=10;

	for (i=10;i>3;i--) {
		sum = recr(i);
	}
	printf("%d팩토리얼 값은 %d \n", i, sum);
	return 0;
}
int recr(int i) {
	int j = 0, sum=1;
	for (j = 0; j < i; j++) {
		sum *= i - j;
	}
	return sum;
}