//만든이 : 이동규
#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	printf("숫자 입력 : ");
	scanf("%d", &a);
	if (a > 0) {
		printf("0보다 큰 수가 a에 저장.\n");
	}
	else if(a == 0){
		printf("0이 a에 저장\n");
	}
	else printf("0보다 작은 수가 a에 저장. \n", a);
	return 0;
}