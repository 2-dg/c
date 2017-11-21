#include<stdio.h>
int main(void) {
	int student[5];
	int count = 0;
	*(student + 0) = 90;          //student[0]=90
	*(student + 1) = 80;		  //student[1]=80
	*(student + 2) = 70;		  //student[2]=70
	for (; count < 5; count++) {
		printf("%d번째 학생의 점수 : %d \n", count+1, *(student + count));
	}
	return 0;
}