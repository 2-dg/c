//������ : �̵���
#include<stdio.h>
int main() {
	int a = 0;
	for (;;) {
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d", &a);
		if (a == 1000) {
			break;
		}
		else if((a>=15)&&(a<=100)){
			printf("ȸ������. \n");
		}
		else if (a < 15) {
			printf("ȸ������ �Ұ�.\n");
		}
	}
	printf("���α׷��� �����մϴ�.\n");
	return 0;
}