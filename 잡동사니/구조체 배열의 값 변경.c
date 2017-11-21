#include<stdio.h>
struct student {
	char no[10];
	char name[20];
};
int main(void) {
	int i = 0;
	struct student stu;
	strcpy(stu.no, "12345");
	strcpy(stu.name, "È«±æµ¿");
	//stu.no="12345";
	//stu.name="È«±æµ¿";
	
	stu.no[2] = '9';
	printf("ÇÐ¹ø : %s, ÀÌ¸§ : %s, \n", stu.no, stu.name);

}