#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int user_select(void);
int b_rand(void);
char user_answer(void);
void value_compare(int user, int com);

void main(void) {
	int i = 0; int user = 0; int com = 0; char answer = 0;
	srand((unsigned)time(NULL));//랜덤패턴을 초기화시키는 방법

	for (;;) {
		user = user_select();//사용자로부터 입력값을 받아서 리턴한다.
		com = b_rand();//컴퓨터로부터 랜덤값을 받아서 리턴한다.
		value_compare(user, com);//사용자값과 컴퓨터값과 비교한다.
		answer = user_answer();//계속할지 안할지 리턴받든다.
		if ((answer == 'n') || (answer == 'N'))break;
	}
	printf("수고하셨어요.");
	return;
}

int b_rand(void) {
	int com = 0;
	com = (rand() % (1 - 0 + 1) + 0);
	printf("컴퓨터선택수= %d \n", com);
	return com;
}

int user_select(void) {
	int user = 0;
	printf("사용자님 앞(1) 뒤(0)");
	scanf("%d", &user);
	return user;
}

char user_answer(void) {
	char answer = 0;
	printf("계속하시겠습니까(y/n)");
	scanf(" %c", &answer);
	return answer;
}

void value_compare(int user, int com) {
	if (user == com) {
		printf("맞습니다.\n");
	}
	else {
		printf("틀렸습니다.\n");
	}
}