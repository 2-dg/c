#include<stdio.h>
struct score {									//��������ü�� ���� �ۼ��ϰ� �Լ����� �� ��
	double math, eng, total;					//����ü�� ����ü��, �׸��� ���ü ������ �ϸ� ��
};
struct student {
	int no;
	struct score s;
};
void print_score(struct student *p);
int main(void) {
	struct student stu;
	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.eng = 80;
	stu.s.total = stu.s.math + stu.s.eng;

	printf("�й� %d \n", stu.no);
	printf("���� %lf, ���� %lf\n", stu.s.math, stu.s.eng);
	printf("���� %lf\n\n", stu.s.total);
	print_score(&stu);

	return 0;
}
void print_score(struct student *p) {
	printf("�й� %d \n", (*p).no);
	printf("���� %lf, ���� %lf\n", (*p).s.math, (*p).s.eng);
	printf("���� %lf\n\n", (*p).s.total);

	*(double*)(&p->no + 2) = 30.0;

	printf("�й� %d \n", p->no);
	printf("���� %lf, ���� %lf\n", p->s.math, p->s.eng);
	printf("���� %lf\n\n", p->s.total);
}