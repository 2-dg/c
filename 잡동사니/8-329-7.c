#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int user_select(void);
int b_rand(void);
char user_answer(void);
void value_compare(int user, int com);

void main(void) {
	int i = 0; int user = 0; int com = 0; char answer = 0;
	srand((unsigned)time(NULL));//���������� �ʱ�ȭ��Ű�� ���

	for (;;) {
		user = user_select();//����ڷκ��� �Է°��� �޾Ƽ� �����Ѵ�.
		com = b_rand();//��ǻ�ͷκ��� �������� �޾Ƽ� �����Ѵ�.
		value_compare(user, com);//����ڰ��� ��ǻ�Ͱ��� ���Ѵ�.
		answer = user_answer();//������� ������ ���Ϲ޵��.
		if ((answer == 'n') || (answer == 'N'))break;
	}
	printf("�����ϼ̾��.");
	return;
}

int b_rand(void) {
	int com = 0;
	com = (rand() % (1 - 0 + 1) + 0);
	printf("��ǻ�ͼ��ü�= %d \n", com);
	return com;
}

int user_select(void) {
	int user = 0;
	printf("����ڴ� ��(1) ��(0)");
	scanf("%d", &user);
	return user;
}

char user_answer(void) {
	char answer = 0;
	printf("����Ͻðڽ��ϱ�(y/n)");
	scanf(" %c", &answer);
	return answer;
}

void value_compare(int user, int com) {
	if (user == com) {
		printf("�½��ϴ�.\n");
	}
	else {
		printf("Ʋ�Ƚ��ϴ�.\n");
	}
}