//만든이 : 이동규
#include<stdio.h>
int main() {
	int a = 0;
	for (;;) {
		printf("나이를 입력하세요 : ");
		scanf("%d", &a);
		if (a == 1000) {
			break;
		}
		else if((a>=15)&&(a<=100)){
			printf("회원가입. \n");
		}
		else if (a < 15) {
			printf("회원가입 불가.\n");
		}
	}
	printf("프로그램을 종료합니다.\n");
	return 0;
}