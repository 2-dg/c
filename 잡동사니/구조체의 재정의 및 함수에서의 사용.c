#include<stdio.h>
#include<string.h>
#define SIZE 3
int i = 0;
struct student {
	char no[10], name[20];
	char* no1;
	double math, english, total;
};
typedef struct student STU;
void input_struct(STU* p);
void print_total(STU* p);
int main(void) {
	STU stu[SIZE];
	input_struct(stu);
	print_total(stu);
	return 0;
}
void input_struct(STU* p) {
	for (i = 0; i < SIZE; i++) {
		printf("�й�, �̸�, ����, ����� ������ �Է� : ");
		scanf("%s %s %lf %lf", p[i].no, p[i].name, &p[i].math, &p[i].english);//no��name�� ���ڿ��̶� 
	}																		  //��ü�� ���ڿ��� ù��° ���� �ּҸ�
																			  //�ǹ��ϴ� ���̹Ƿ� ���� &�� ������ �ʾƵ� ��
	p[0].no1 = "abcde";
	strcpy(p[0].no, "abcde");
}
void print_total(STU* p) {
	for (i = 0; i < SIZE; i++) {
		p[i].total = p[i].math + p[i].english;
		printf("%s %s %lf %lf %lf \n", p[i].no, p[i].name, p[i].math, p[i].english, p[i].total);
	}
}