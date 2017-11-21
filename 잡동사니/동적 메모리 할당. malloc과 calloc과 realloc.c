#include<stdio.h>
#include<stdlib.h>
void print_malloc(int (*p)[2]);
int main(void) {
	int (*p)[2] = NULL;
	int(*p2)[2] = NULL;
	int *p1 = NULL;
	int i = 0, j = 0, count = 0;
	p1 = (int *)malloc(8); //int a[2] ==> p=a;
	p1[0] = 10;
	p1[1] = 20;
	p1 = (int *)realloc(p1, 16);	//int a[2] => a[4] => p=a;
	p1[2] = 30;
	p1[3] = 40;
	for (i = 0; i < 4; i++) {
		printf("p1[%d] = %d\n", i, p1[i]);
	}
	p=(int (*)[2])malloc(sizeof(int)*10); // p=&num;. sizeof(int)*10 = 40을 의미. 곧 10개의 1차원배열.
						  				  // int num[5][2], p = num;
	p2 = (int(*)[2])calloc(10, sizeof(int));
	//printf("*p = %d\n", *p);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("p2[%d][%d] = %d\n", i, j, p2[i][j]);
		}
	}
	print_malloc(p);
	print_malloc(p2);
	free(p);							  // 메모리 사용 해제
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("p[%d][%d] = %d\n", i, j, p[i][j]);
		}
	}
	return 0;
}
void print_malloc(int (*p)[2]) {
	int i = 0, j=0, count=0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			p[i][j] = ++count;
			printf("p[%d][%d] = %d\n", i,j, p[i][j]);
		}
	}
}