#include<stdio.h>
#define SIZE 3
void print_int(int* p);
void print_array(int* p);
int main(void) {
	int k[SIZE] = { 10, 20, 30 };
	int m[2][4] = { 0, };
	int a = 11;
	int* p = NULL;
	p = &a;
	printf("p  = %d\n", p);
	printf("&a = %d\n", &a);
	printf("a = \t\t%d\n", a);						//�������޹��(�ݹ��̾�巹�� ���)
													//�Լ� �����ͺ��� ���� -> ���� �ȿ��� �ּҸ� �θ�
	print_int(&a);									//�Լ� �ȿ����� �ּҰ� �� ���̹Ƿ� ���迬���ڸ� ���̰ų�
	print_array(k);									//�迭0�� �ٿ��� ���� ���.(�׳�p�������� �ּ����)
	printf("main k[%d] = %d \n", 2, k[2]);
	printf("sizeof(k) = %d, k�迭�� ���� = %d\n",sizeof(k), sizeof(k)/sizeof(k[0]));
	printf("sizeof(m) = %d, m�迭�� ���� = %d\n", sizeof(m), sizeof(m) / sizeof(m[0][0]));
	printf("m���迭�� ���� =  %d, m��迭�� ���� = %d\n", sizeof(m[0])/sizeof(m[0][0]), sizeof(m) / sizeof(m[0]));
	printf("main�� ���� = %d \n", main);			
	
	return 0;
}
void print_int(int* p) {
	printf("*p = *(p+0) = \t%d\n", *p);
	printf("p[0] = \t\t%d\n", p[0]);
}
void print_array(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("k[%d] = %d \n", i, p[i]);
	}
	p[2] = 200;
}