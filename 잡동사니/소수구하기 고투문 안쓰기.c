//7-286 소수구하기
#include<stdio.h>
int main(void) {
	int i = 0, j = 0, count = 0;
	for (i = 2; i<101; i++) {
		for (j = 2; j<i; j++) {
			if (i%j == 0) {
				count++;
			}
		}
		if (count == 0) {
			printf("%d ", i);
		}
		else {
			count = 0;
		}
	}
}