#include<stdio.h>
void self_service(void){
	static int a = 0;
	printf("�������� %d \n", a++);
	self_service();
}
int main(void) {
	self_service(); //�޸� ������ �� �Ǿ� ������� (���ÿ��� heap���� ���� BSS���� ħ���ϴ� ���� ��������)
}