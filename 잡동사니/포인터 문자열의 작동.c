#include<stdio.h>
int main(void) {
	char* a[2] = { "Good Morning", "c-language" };
	char** p = a;
	printf("d = %c \n", a[0][3]);
	printf("d = %c \n", p[0][3]);

	printf("d = %c, �ּ� = %d, %d \n", a[0][3], &a[0][3], a[0] + 3);
	printf("d = %c, �ּ� = %d, %d \n", p[0][3], &p[0][3], a[0] + 3); //�ڵ念���� �ּ�

	printf("%d %d\n", &a[0], &p);								   //���ÿ����� �ּ�


	return 0;
}