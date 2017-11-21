#include<stdio.h>
#include<string.h>
int main(void) {
	char array[50] = "100 3.14 good-morning";
	int num1;
	double num2;
	char str[50];

	//scanf("%d %lf %s", &num, &num2, str); ->키보드로부터 입력받음.
	sscanf(array, "%d %lf %s", &num1, &num2, str);
	//배열로부터 입력받음. (100, 3.14, good-morning이 각각 해당되는 주소로 들어간다.
	//만약에 이런 것들을 통신으로 주고받으면 이러한 형태..? 포멧을 프로토콜이라 한다.
	//예를 들어 여기에서는 첫번째 주소는 정수형, 두번째는 실수형, 세번째는 문자열
	//이라는 것처럼 말이다.
	puts("출력");
	printf("%d, %lf, %s \n", num1, num2, str);
	
}