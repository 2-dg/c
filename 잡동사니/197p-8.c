/*
197p 8번
1. 정수값 입력(반복문)
 -정수값 누적
 -카운트
2. 만약에 0이 입력된다면 끝난다. if(jumsu==0) break;{}else{}
 -정수값을 전부 더해야 한다
 -카운트를 출력한다
*/
#include<stdio.h>
int main() {
	int jumsu = 0, count = 1, sum = 0;
	for (;;) {
		printf("%d. 정수입력요망 : ", count++);
		scanf("%d", &jumsu);
		if (jumsu == 0){break;}else{}
		sum += jumsu;
	}
	printf("전체 카운트 = %d \n", count-2);
	printf("전체 합계는 = %d \n", sum);
}