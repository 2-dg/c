#include<stdio.h>
#include<math.h>
#define PI 3.141592

double sin_cal(int i);
int main(void) {
	int i = 0;
	double result = 0.0;
	for (i=0;i<=180;i+=10) {
		result = sin_cal(i);
		printf("sin(%d) = %lf \n", i, result);

	}


	return 0;
}
double sin_cal(int i) {
	return sin(i*PI / 180);
}