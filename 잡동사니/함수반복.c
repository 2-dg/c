#include<stdio.h>
void self_service(void){
	static int count = 0;
	if (count == 10) { return; }
	printf("�������� %d \n", count++);
	self_service();
}
int main(void) {
	self_service(); //�޸� ������ �� �Ǿ� ������� (���ÿ��� heap���� ���� BSS���� ħ���ϴ� ���� ��������)
}