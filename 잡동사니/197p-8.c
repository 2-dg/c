/*
197p 8��
1. ������ �Է�(�ݺ���)
 -������ ����
 -ī��Ʈ
2. ���࿡ 0�� �Էµȴٸ� ������. if(jumsu==0) break;{}else{}
 -�������� ���� ���ؾ� �Ѵ�
 -ī��Ʈ�� ����Ѵ�
*/
#include<stdio.h>
int main() {
	int jumsu = 0, count = 1, sum = 0;
	for (;;) {
		printf("%d. �����Է¿�� : ", count++);
		scanf("%d", &jumsu);
		if (jumsu == 0){break;}else{}
		sum += jumsu;
	}
	printf("��ü ī��Ʈ = %d \n", count-2);
	printf("��ü �հ�� = %d \n", sum);
}