//만든이 : 이동규
#include<stdio.h>
int main(void) {
	char array[10];
	printf("배열값 입력 : ");
	//scanf("%s", array);
	gets(array);
	puts(array);
	printf("%s\n", array);
	return 0;
}