#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void b_rand(int i);

int main(void) {
	int i = 0;
	int user = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++) {
		b_rand(i);
	}
	return 0;
}
void b_rand(int i) {
	printf("%d¹øÂ° : %d\n",i, rand()%2);
}