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
		puts(p);					//이렇게 하면 계속 array에서 NULL까지만 찾아 찍으므로 good만 반복되는 것
	}
	printf("\n");
	p = strtok(array1, "-");
	for (count = 0; p!= NULL;count++) {
		puts(p);
		p=strtok(NULL, "-");
	}

	printf("토큰의 갯수는 %d개입니다.\n", count);


	puts(array); //이렇게 하면 strtok명령어가 문자열을 출력하고 다음에 오는 구분자에 NULL을 집어넣고
				 //끝내기 때문에 strtok(NULL, "-")을 하면 good다음의 '-'에 NULL이 들어가있는 것이고
				 //문자열의 출력방식이 그러하듯이 NULL까지 찍고 끝나는 것이다.
	puts(array + 5); //그래서 이렇게 하면 지정한 주소(+5)부터 다음NULL값까지 출력되는 것.

}