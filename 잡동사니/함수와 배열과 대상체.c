#include<stdio.h>
#define SIZE 3
void score_input(int* p);       
void total(int* sum, int score[]);
int main(void) {
	int score[SIZE] = { 0, }, i = 0;
	int sum = 0;
	double avg = 0.0;
	score_input(score);
	total(&sum, score);
	avg = (double)sum / SIZE;
	printf("�л��� ������ %d, ����� %.1lf�Դϴ�.", sum, avg);
	return 0;
}
void score_input(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("%d��° �л� ���� �Է� ��� : ", i +1);
		scanf("%d", &p[i]);
		if (p[i] > 100 || p[i] < 0) {
			printf("�ٽ� �Է��Ͻÿ�. \n");
			i--;					//���Է��� ���ؼ� i�� --
		}
	}
}
void total(int* s, int score[]) {
	int i = 0;
		for (i = 0; i < SIZE; i++) {
			*s += score[i];									//*sum���� �ؾ��� ������ ��
		}													//s[0] = s[0] + s[i] 
}
//�� �� ���� �� �׳� ������ �� �� ���� �� ���������ڷ� �־ ������ �Ѵܰ� ���缭 ����.
//�׷��ϱ� �ؿ� �ͼ��� s��ü�� �ּҸ� ����Ű�� �Ŵϱ� s +=score[i]�� �ع����� �ּҿ� ���Ѵٴ� ���� �Ǵ� �ǵ�
//�̰� �ּ� ���� ���� �����ؾ��� �ϴ� �Ŵϱ� ������������ *�� ��������ϴ� ���̴�.
//�׷��� ���⿡�� �׳� s�� ����ϸ� �ּҰ� ���´�.