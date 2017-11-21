#include<stdio.h>
int main(void) {
	int x = 24, y = 16, temp = 0, gcd = 0;
	for (;;) {
		temp = y;
		y = x%y;
		x = temp;
		if (y == 0) {
			gcd = x; break;
		}
	}
	printf("최대공약수는 %d", gcd);
}