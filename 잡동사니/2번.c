#include<stdio.h>
int main()
{
	int a=1, b=0, c=0;
	for (a = 1; a < 8; a++) {
		printf("%d\n", a);
		if (a <= 4) {
			for (b = 3; b > b - a; b--);
			printf(" ");
		}
	}
}