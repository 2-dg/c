//������ : �̵���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int i = 0;
	srand((unsigned)time(NULL));
	for (i = 1; i < 11; i++) {
		printf("%d \n", rand() % 10);
	}
	return 0;
}
//�� 57~189������ ������ �߻��ϰ� ������ rand()%(189-57+1)+57�ϸ� �ȴ�.