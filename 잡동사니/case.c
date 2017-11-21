#include<stdio.h>
int main()
{
	int a; //switch변수
	int b, c, d; //구구단변수
	int e; //case2변수
	int f, g, h, i; //case3변수	
	h = 0;
back:
	printf("1,2,3중 하나를 입력 : ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		for (b = 2; b<10; b++)
		{
			for (c = 1; c<10; c++)
			{
				d = b*c;
				printf("%d * %d = %d \n", b, c, d);
			}
			printf("-----------\n");
		}
		break;
	case 2:
		for (e = 0; e <= 100; e += 5)
		{
			printf("%d \n", e);
		}
		break;
	case 3:
		for (f = 5; f >= 1; f--)             // f=5에서 시작. g=1. h=0에서 h++을 만나 h=1
		{								     // h를 프린트 = 1, 위에서 g=2, h=2. 2를 프린트
			for (g = 1; g <= f; g++)		 // f=5이므로 g<=f에 따라 h++및 프린트 과정을 5번 반복
			{								 // 결과 1 2 3 4 5 (1줄 완성, 현재 h값은 5)
				h++;						 //
				printf("%3d", h);			 // 처음과정의 f--로 인해 f=4. f>=1충족.
			}								 // 밑으로 내려가서 h++을 만나 h=6. f=4이므로 
			printf("\n");					 // 34행의 g <= f에 의해 4번 반복 -> 6 7 8 9 출력
			for (i = 1; i <= 7 - g; i++)	 // 이걸 반복하면 숙제 값이 나온다
			{
				printf("   ");
			}
		}break;
	default:
		printf("다시 입력하시오 \n");
		break;
	}goto back;
}