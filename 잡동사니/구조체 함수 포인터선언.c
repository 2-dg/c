//만든이 : 이동규
#include<stdio.h>
struct student {
	int x, y;
};
typedef struct student STU;
void input(STU* p);
void print(STU* p);
int main(void){
	STU s;
	//STU* p;
	input(&s);
	print(&s);
	return 0;
}
void input(STU* p) {
	printf("구조체 멤버 x y 정수값을 입력 요망 : ");
	scanf("%d %d", &(*p).x, &(*p).y);
}
void print(STU* p) {
	printf("%d %d \n", p->x, p->y);
}