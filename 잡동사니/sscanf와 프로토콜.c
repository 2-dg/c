#include<stdio.h>
#include<string.h>
int main(void) {
	char array[50] = "100 3.14 good-morning";
	int num1;
	double num2;
	char str[50];

	//scanf("%d %lf %s", &num, &num2, str); ->Ű����κ��� �Է¹���.
	sscanf(array, "%d %lf %s", &num1, &num2, str);
	//�迭�κ��� �Է¹���. (100, 3.14, good-morning�� ���� �ش�Ǵ� �ּҷ� ����.
	//���࿡ �̷� �͵��� ������� �ְ������ �̷��� ����..? ������ ���������̶� �Ѵ�.
	//���� ��� ���⿡���� ù��° �ּҴ� ������, �ι�°�� �Ǽ���, ����°�� ���ڿ�
	//�̶�� ��ó�� ���̴�.
	puts("���");
	printf("%d, %lf, %s \n", num1, num2, str);
	
}