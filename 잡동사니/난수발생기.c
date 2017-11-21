//만든이 : 이동규
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int i = 0;
	srand((unsigned)time(NULL));
	for (i = 1; i < 11; i++) {
		printf("%d \n", rand() % 10);
	}
	return 0;
}
//예 57~189범위의 난수를 발생하고 싶으면 rand()%(189-57+1)+57하면 된다.