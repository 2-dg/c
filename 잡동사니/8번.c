#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void ran(int* p);
int sum_scores(int* p);
double pyun(int* p, double avg);
int main(void) {
	srand((unsigned)time(NULL));
	int a[10] = { 0, };
	int sum = 0;
	double avg = 0.0, pn = 0.0;
	ran(a);
	sum = sum_scores(a);
	avg = sum / (double)10;
	printf("평균은 %lf \n", avg);
	pn = pyun(a, avg);
}
void ran(int* p) {
	int i = 0;
	for (i = 0; i < 10; i++) {
		p[i] = rand() % 100 + 1;
		printf("%d \t", p[i]);
	}
	printf("\n");
}
int sum_scores(int* p) {
	int i = 0, sum=0;
	for (i = 0; i < 10; i++) {
		sum += p[i];
	}printf("합계는 %d \n",sum);
	return sum;
}
double pyun(int* p, double avg) {
	int i = 0;
	double result = 0.0;
	for (i = 0; i < 10; i++) {
		result += (p[i] - avg)*(p[i] - avg)/10;
	}
	printf("표준편차는 %lf \n", sqrt(result));
}