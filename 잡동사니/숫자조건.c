//������ : �̵���
#include<stdio.h>
int main() {
	int a = 0, b = 0, r = 0;
	for (b=0;b<101;b++) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &a);
		if (a == 1000) {
			break;
		}
		else if(a>=0){
			printf("0���� ũ��. \n");
		}
		else if (a<0) {
			printf("0���� �۴�.\n");
		}
	}
	printf("���α׷��� �����մϴ�.\n");
	return 0;
}