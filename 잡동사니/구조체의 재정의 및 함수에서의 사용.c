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
		printf("학번, 이름, 수학, 영어성적 순으로 입력 : ");
		scanf("%s %s %lf %lf", p[i].no, p[i].name, &p[i].math, &p[i].english);//no과name은 문자열이라 
	}																		  //자체가 문자열의 첫번째 문자 주소를
																			  //의미하는 것이므로 굳이 &를 붙이지 않아도 됨
	p[0].no1 = "abcde";
	strcpy(p[0].no, "abcde");
}
void print_total(STU* p) {
	for (i = 0; i < SIZE; i++) {
		p[i].total = p[i].math + p[i].english;
		printf("%s %s %lf %lf %lf \n", p[i].no, p[i].name, p[i].math, p[i].english, p[i].total);
	}
}