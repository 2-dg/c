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
	printf("학생의 총점은 %d, 평균은 %.1lf입니다.", sum, avg);
	return 0;
}
void score_input(int* p) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("%d번째 학생 점수 입력 요망 : ", i +1);
		scanf("%d", &p[i]);
		if (p[i] > 100 || p[i] < 0) {
			printf("다시 입력하시오. \n");
			i--;					//재입력을 위해서 i를 --
		}
	}
}
void total(int* s, int score[]) {
	int i = 0;
		for (i = 0; i < SIZE; i++) {
			*s += score[i];									//*sum으로 해야지 안으로 들어감
		}													//s[0] = s[0] + s[i] 
}
//들어갈 수 있을 땐 그냥 들어가지고 들어갈 수 없을 땐 간접연산자로 넣어서 영역을 한단계 낮춰서 들어간다.
//그러니까 밑에 와서는 s자체가 주소를 가르키는 거니까 s +=score[i]를 해버리면 주소에 더한다는 식이 되는 건데
//이건 주소 안의 값을 저장해야하 하는 거니까 간접연산자인 *를 더해줘야하는 것이다.
//그래서 여기에서 그냥 s를 출력하면 주소가 나온다.