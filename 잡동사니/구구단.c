#include<stdio.h>
int main()
{
	int a=0, b=0, c=0;
	for (a = 1; a < 10; a++) {
		for (b = 1; b < 10; b++) {
			c = a*b;
			printf("%d * %d = %d \n", a, b, c);
		}
		printf("===========\n");
	}
}