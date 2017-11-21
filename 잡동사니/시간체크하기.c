#include<stdio.h>
#include<time.h>
#define MAX 10000
int main(void) {
	int i = 0;
	clock_t startTime = 0l , endTime = 0l, result = 0l;
	startTime = clock();
	for (i=1;i<=MAX;i++) {
		printf("%d ", i);
	}
	endTime = clock();
	printf("총 걸리는 밀리초 : %lf \n", ((double)endTime - startTime));
	return 0;
}