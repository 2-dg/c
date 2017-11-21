#include<stdio.h>
int main(void) {
	int score = 0;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10: printf("A학점입니다."); break;
	case 9: printf("B학점입니다."); break;
	case 8: printf("C학점입니다."); break;
	case 7: printf("D학점입니다."); break;
	case 6: printf("E학점입니다."); break;
	default: printf("F학점입니다."); break;
	}
}