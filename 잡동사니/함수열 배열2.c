#include<stdio.h>
int array_total(int* p) {
	int sum = 0;
	int i = 0;
	for(i=0;i<3;i++){
		sum += p[i];
	}
	return sum;
}
int main(void) {
	int sum = 0;
	int array[] = { 87,65,78 };
	sum = array_total(array);
	printf("�迭�� �հ�� %d \n", sum);
	printf("�迭�� ������ %lf \n", sum / 3.0);
	return 0;
}