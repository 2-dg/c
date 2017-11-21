#include<stdio.h>
void self_service(void){
	static int a = 0;
	printf("셀프서비스 %d \n", a++);
	self_service();
}
int main(void) {
	self_service(); //메모리 감당이 안 되어 멈춰버림 (스택에서 heap까지 가고 BSS까지 침범하는 순간 터져버림)
}