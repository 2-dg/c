#include<stdio.h>
#include<string.h>
int main(void) {
	char array[50] = "good1-morning-good2-afternoon-good3-evening";
	char array1[50] = { 0, };
	char* p = NULL;
	int count = 0;
	int i = 0;
	puts(array);
	strcpy(array1, array);

	p = strtok(array, "-");
	for (i = 0; i < 10; i++) {
		p = strtok(array, "-");
		puts(p);					//�̷��� �ϸ� ��� array���� NULL������ ã�� �����Ƿ� good�� �ݺ��Ǵ� ��
	}
	printf("\n");
	p = strtok(array1, "-");
	for (count = 0; p!= NULL;count++) {
		puts(p);
		p=strtok(NULL, "-");
	}

	printf("��ū�� ������ %d���Դϴ�.\n", count);


	puts(array); //�̷��� �ϸ� strtok��ɾ ���ڿ��� ����ϰ� ������ ���� �����ڿ� NULL�� ����ְ�
				 //������ ������ strtok(NULL, "-")�� �ϸ� good������ '-'�� NULL�� ���ִ� ���̰�
				 //���ڿ��� ��¹���� �׷��ϵ��� NULL���� ��� ������ ���̴�.
	puts(array + 5); //�׷��� �̷��� �ϸ� ������ �ּ�(+5)���� ����NULL������ ��µǴ� ��.

}