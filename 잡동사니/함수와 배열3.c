/*
void input_score(int* score);
int sum_score(int* score);
double avg_score(sum);
*/
#include<stdio.h>
#define SIZE 3
void input_score(int* score);
int sum_score(int* score);
double avg_score(int sum);                        //순서- 전처리기, 심볼릭, 함수타입선언, 전역변수

int k = 0;
int main(void) {
	int score[SIZE] = { 0, }, i = 0, sum = 0;
	double avg = 0.0;
	//for (i = 0; i < SIZE; i++) {
	//	printf("%d번째 학생 성적 입력 : ", i + 1);
	//	scanf("%d", score + i);
	//	if (score[i] > 100 || score[i] < 0) {
	//		printf("다시 입력 요망(0~100)\n");
	//		i--; continue;
	//	}
	//}
	//for (i = 0; i < SIZE; i++) {
	//	sum += *(score + i);//score[i]
	//}
	//avg = (double)sum / SIZE;
	//printf("평균 : %lf \n", avg);
	input_score(score);
	sum = sum_score(score);
	avg = avg_score(sum);
	printf("%d %d %d \n", score[0], score[1], score[2]);
	printf("합계 = %d, %lf",sum, avg);
	return 0;
}
void input_score(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("%d번째 학생 성적 입력 : ", i + 1);
		scanf("%d", &p[i]);
		if (p[i] > 100 || p[i] < 0) {
			printf("다시 입력 요망(0~100)\n");
			i--; continue;
		}
	}
}
int sum_score(int* p) {
	int i = 0, sum = 0;
	for (i = 0; i < SIZE; i++) {
		sum += *(p + i);  //  score[i]; 따로 지정해주지 않는 이상 score[0]부터 시작.
	}
	return sum;
}
double avg_score(int sum) {
	double result = 0.0;
	result = sum / SIZE;
	return result;
}