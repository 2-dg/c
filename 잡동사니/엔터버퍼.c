#include<stdio.h>
int main(void) {
	char ch = 0;
	while (ch != EOF) {
		ch = getchar();
		putchar(ch);
		putchar(ch);
		printf("%d", ch);
	}
	return 0;
}