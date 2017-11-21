#include<stdio.h>
#define SIZE 5
void mult_array(double* a, double* b, double* c);
void printf_array(double* a, double* b, double* c);
int main(void) {
	int i = 0;
	double a[SIZE] = { 2.2 , 3.5 , 2.5 , 10.1 , 4.0 };
	double b[SIZE] = { 3.3 , 2.0 , 4.0 , 1.0 , 2.5 };
	double c[SIZE] = { 0.0, };
	for (i = 0; i < 5; i++) {
		c[i] = a[i] + b[i];
		printf("%lf + %lf = %lf \n", a[i], b[i], c[i]);
	}
	printf("\n");
	mult_array(a, b, c);
	printf_array(a, b, c);
	return 0;
}
void mult_array(double* a, double* b, double* c) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		c[i] = a[i] + b[i];
	}
}
void printf_array(double* a, double* b, double* c) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%lf + %lf = %lf \n", a[i], b[i], c[i]);
	}
}