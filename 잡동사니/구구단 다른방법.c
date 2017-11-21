#include<stdio.h>
int main()
{
	int i = 0, dan = 0;

	for (dan = 1; dan < 10; dan++) {
		printf("====%d´Ü====\n", dan);
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %d \n", dan, i, dan*i);
		}
		printf("\n");
	}
}