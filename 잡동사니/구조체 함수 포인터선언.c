//������ : �̵���
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
	printf("����ü ��� x y �������� �Է� ��� : ");
	scanf("%d %d", &(*p).x, &(*p).y);
}
void print(STU* p) {
	printf("%d %d \n", p->x, p->y);
}