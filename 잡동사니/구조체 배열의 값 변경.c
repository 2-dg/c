#include<stdio.h>
struct student {
	char no[10];
	char name[20];
};
int main(void) {
	int i = 0;
	struct student stu;
	strcpy(stu.no, "12345");
	strcpy(stu.name, "ȫ�浿");
	//stu.no="12345";
	//stu.name="ȫ�浿";
	
	stu.no[2] = '9';
	printf("�й� : %s, �̸� : %s, \n", stu.no, stu.name);

}