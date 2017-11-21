#include<stdio.h>
struct student {
	char no[10];
	char name[20];
	double math;
	double eng;
	double total;
};
typedef struct student stu;
void print_struct(stu* p);
void print_struct2(stu* p, int size);
void input_struct(stu* p, int size);
int main(void) {
	int i = 0, size = 0;
	struct student stu[3] = {
		{ "20101323", "park", 80, 90, 0 },
		{ "20101324", "kim", 95, 85, 0 },
		{ "20101325", "lee", 100, 90, 0 }
	};

	size = sizeof(stu) / sizeof(stu[0]);

	struct student stu4 = { "20101326", "choi", 80,90,90 };
	struct student stu5 = { "20101327", "cho", 80,90,80 };


	print_struct(&stu[0]);
	print_struct(&stu[1]);
	print_struct(&stu[2]);
	print_struct(&stu4);
	print_struct(&stu5);
	printf("\n\n");

	print_struct2(stu, size);
	input_struct(stu, size);
	print_struct2(stu, size);

}
void print_struct(stu* p) {
	(*p).total = (*p).math + (*p).eng;
	printf("학번 : %s, 이름 %s \n", (*p).no, (*p).name);
	printf("총점 : %lf \n", (*p).total);
	return;
}
void print_struct2(stu* p, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		p[i].total = p[i].math + p[i].eng;
		printf("학번 : %s, 이름 %s \n", p[i].no, p[i].name);
		printf("총점 : %lf \n", p[i].total);
	}
	printf("\n");
	return;
}
void input_struct(stu* p, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d번째 학번, 이름, 수학, 영어 : ", i + 1);
		scanf("%s %s %lf %lf", &p[i].no, &p[i].name, &p[i].math, &p[i].eng);
		p[i].total = p[i].math + p[i].eng;
		printf("학번 : %s, 이름 %s \n", p[i].no, p[i].name);
		printf("총점 : %lf \n", p[i].total);
	}
	printf("\n");
	return;
}