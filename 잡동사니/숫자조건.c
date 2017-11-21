//만든이 : 이동규
#include<stdio.h>
int main() {
	int a = 0, b = 0, r = 0;
	for (b=0;b<101;b++) {
		printf("숫자를 입력하세요 : ");
		scanf("%d", &a);
		if (a == 1000) {
			break;
		}
		else if(a>=0){
			printf("0보다 크다. \n");
		}
		else if (a<0) {
			printf("0보다 작다.\n");
		}
	}
	printf("프로그램을 종료합니다.\n");
	return 0;
}