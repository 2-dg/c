#include<stdio.h>
int main()
{
	int a;
	int *b;					// 포인터변수는 메모리의 어드레스를 데이터로 취급하는 변수
	int A[5];
	b = &a;					// 여기에서 5행에서 b를 포인터변수로 지정하였기 때문에 
	a = 10;					// a변수값을 저장하는 메모리 공간이 b의 값이 된다 (곧 a=10이라는 정보를 저장하고 있는 공간의 주소)
	printf("%d %d %d %d %d %d %d %d %d %d %d \n", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9], &A[10]);
	printf("%d \n", b);
	printf("%d \n", a);
	return 0;
}