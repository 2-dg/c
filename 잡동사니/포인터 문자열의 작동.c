#include<stdio.h>
int main(void) {
	char* a[2] = { "Good Morning", "c-language" };
	char** p = a;
	printf("d = %c \n", a[0][3]);
	printf("d = %c \n", p[0][3]);

	printf("d = %c, 林家 = %d, %d \n", a[0][3], &a[0][3], a[0] + 3);
	printf("d = %c, 林家 = %d, %d \n", p[0][3], &p[0][3], a[0] + 3); //内靛康开狼 林家

	printf("%d %d\n", &a[0], &p);								   //胶琶康开狼 林家


	return 0;
}