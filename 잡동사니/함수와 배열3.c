/*
void input_score(int* score);
int sum_score(int* score);
double avg_score(sum);
*/
#include<stdio.h>
#define SIZE 3
void input_score(int* score);
int sum_score(int* score);
double avg_score(int sum);                        //����- ��ó����, �ɺ���, �Լ�Ÿ�Լ���, ��������

int k = 0;
int main(void) {
	int score[SIZE] = { 0, }, i = 0, sum = 0;
	double avg = 0.0;
	//for (i = 0; i < SIZE; i++) {
	//	printf("%d��° �л� ���� �Է� : ", i + 1);
	//	scanf("%d", score + i);
	//	if (score[i] > 100 || score[i] < 0) {
	//		printf("�ٽ� �Է� ���(0~100)\n");
	//		i--; continue;
	//	}
	//}
	//for (i = 0; i < SIZE; i++) {
	//	sum += *(score + i);//score[i]
	//}
	//avg = (double)sum / SIZE;
	//printf("��� : %lf \n", avg);
	input_score(score);
	sum = sum_score(score);
	avg = avg_score(sum);
	printf("%d %d %d \n", score[0], score[1], score[2]);
	printf("�հ� = %d, %lf",sum, avg);
	return 0;
}
void input_score(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("%d��° �л� ���� �Է� : ", i + 1);
		scanf("%d", &p[i]);
		if (p[i] > 100 || p[i] < 0) {
			printf("�ٽ� �Է� ���(0~100)\n");
			i--; continue;
		}
	}
}
int sum_score(int* p) {
	int i = 0, sum = 0;
	for (i = 0; i < SIZE; i++) {
		sum += *(p + i);  //  score[i]; ���� ���������� �ʴ� �̻� score[0]���� ����.
	}
	return sum;
}
double avg_score(int sum) {
	double result = 0.0;
	result = sum / SIZE;
	return result;
}