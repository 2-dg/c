//�Ǻ���ġ ����
//0 1 1 2 3 5 8 13 21 ...
#include<stdio.h>
int main(void) {
	double a = 0.0, b = 1.0, c = 1.0;
	int i = 0.0, n = 0;
	//printf("f%d�� : %d \n",0, a);
	//printf("f%d�� : %d \n",1, b);
	printf("�� ��° �Ǻ���ġ ������ ��� : ");
	scanf("%d", &n);
	for (i=2;1;i++) {
		a = b, b = c, c = a + b;
		if (i == n) {
			printf("f%d�� : %.lf \n", i, c);
		}
	}
	return 0;
}