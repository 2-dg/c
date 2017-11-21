#include<stdio.h>
int main(void) {
	int a[3][2] = { 1,2,3,4,5,6 };
	int count = sizeof(a) / sizeof(a[0][0]);		//전체 나누기 최소단위
	int mol = sizeof(a[0]);							//1개의 a행의 사이즈 (번지상수 사이즈)
	int mol2 = sizeof(*a);
	int mol3 = sizeof(*a[0]);						//	
	int col = sizeof(a) / sizeof(a[0]);				//전체 나누기 행
	int row = sizeof(a[0]) / sizeof(a[0][0]);		//행 나누기 최소단위
	printf("칸수 = %d, 행 =  %d, 열 =  %d \n", count, col, row);
	printf("sizeof(a[0]) = %d (8바이트짜리 정수형 번지상수이기 때문에) \n", mol);
	printf("sizeof(*a) = %d (8바이트짜리 정수형 번지상수이기 때문에) \n", mol2);
	printf("sizeof(*a[0]) = %d (8바이트짜리 정수형 번지상수이기 때문에) \n", mol3);
	printf("%d %d %d %d \n", *a[0], *a[0] + 1, (*a)[0], *(*a)+1 );
	printf("%d %d %d %d \n", *a[1], *a[1] + 1, (*a[1])+0, (*a)[2] + 1);
}