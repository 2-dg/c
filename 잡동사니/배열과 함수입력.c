#include<stdio.h>
#define row 4
#define col 3
void input_array(int (*a)[3]);           //(int (*a)[3])  함수선언에는 배열선언이 올 수 없다!
void print_array(int (*a)[3]);
void print_1array(int* p);               //일차원배열로 바꾸기
int main(void) {
	int array[4][3] = { 0, };
	input_array(array);
	print_array(array);
	print_1array(*array);				//얘는 4바이트짜리 정수형 번지를 줘야 함. 대상체를 맞춰야하기 때문
										//*표시는 대상체를 한차원 낮추겠다는 의미(*a=a[0])
	return 0;							//*a, a[0], &a[0][0]
}
void input_array(int (*a)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d]에 값을 입력하시오 : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void print_array(int (*a)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] = %d \t", i, j, a[i][j]);
		}
		printf("\n");
	}
}
void print_1array(int* p) {
	int i = 0, j = 0;
	for(j=0;j<(4*3);j++){
		printf("p[%d] = %d \n", j, p[j]);	
	}
}

/*
void input_array(int array[][3]) {
	int i = 0, j = 0, count=1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			a[i][j] = ++count;
		}
	}
}          자동으로 1,2,3,4~저장하는 방법
*/