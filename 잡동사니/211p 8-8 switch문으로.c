#include<stdio.h>
int main(void) {
	int score = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10: printf("A�����Դϴ�."); break;
	case 9: printf("B�����Դϴ�."); break;
	case 8: printf("C�����Դϴ�."); break;
	case 7: printf("D�����Դϴ�."); break;
	case 6: printf("E�����Դϴ�."); break;
	default: printf("F�����Դϴ�."); break;
	}
}