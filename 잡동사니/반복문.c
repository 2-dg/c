#include<stdio.h>
int main()
{
	int a = 0;					//변수a를 상수0으로 저장하고 시작
	do							//do문 시작
	{
		printf("%d", a);		//일단 1번 실행 (a=0이므로 0이 출력)
		a++;					//a=1이 됨.
	} while (a < 10);			//a<10까지 실행이므로 1~9까지 출력. (1 <=9랑 출력값은 같음)
	printf("\n");				//1~9까지 찍히고 a가 10을 받았을 때 while에 있는 a<10에 거짓이 되므로 중괄호 바깥에 있는 얘가 실행됨
	for (a = 0; a < 10; a++)	//for문은 선언, 조건, 동작과 동시에 시작 (a=0으로 재정의)
	{							//
		printf("%d", a);		//a를 출력(처음엔 0이므로 0이 출력. a<10까지 a++이므로 1~9까지 출력됨
	}
	printf("\n");
	a = 0;
	while (a < 10)
	{
		printf("%d", a); a++;
	}	printf("\n");	
}