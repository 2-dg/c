//������ : �̵���
#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	printf("���� �Է� : ");
	scanf("%d", &a);
	if (a > 0) {
		printf("0���� ū ���� a�� ����.\n");
	}
	else if(a == 0){
		printf("0�� a�� ����\n");
	}
	else printf("0���� ���� ���� a�� ����. \n", a);
	return 0;
}