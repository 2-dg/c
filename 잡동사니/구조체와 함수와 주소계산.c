#include<stdio.h>
struct score {									//하위구조체를 위에 작성하고 함수에서 쓸 땐
	double math, eng, total;					//구조체와 구조체명, 그리고 대상체 선언을 하면 됨
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

	printf("학번 %d \n", stu.no);
	printf("수학 %lf, 영어 %lf\n", stu.s.math, stu.s.eng);
	printf("총점 %lf\n\n", stu.s.total);
	print_score(&stu);

	return 0;
}
void print_score(struct student *p) {
	printf("학번 %d \n", (*p).no);
	printf("수학 %lf, 영어 %lf\n", (*p).s.math, (*p).s.eng);
	printf("총점 %lf\n\n", (*p).s.total);

	*(double*)(&p->no + 2) = 30.0;

	printf("학번 %d \n", p->no);
	printf("수학 %lf, 영어 %lf\n", p->s.math, p->s.eng);
	printf("총점 %lf\n\n", p->s.total);
}