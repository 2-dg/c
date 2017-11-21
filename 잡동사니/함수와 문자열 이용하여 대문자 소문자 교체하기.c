#include<stdio.h>
#define SIZE 50
int count = 0;
void string(char* p);
int main(void) {
	char array1[SIZE] = "good-morning, good-afternoon, good-evening";
	char array2[SIZE] = "GOOD-MORNING, GOOD-AFTERNOON, GOOD-EVENING";
	string(array1);
	string(array2);
	printf("%s\n", array1);
	printf("%s\n", array2);
}
void string(char* p) {
	for (count = 0; count < SIZE; count++) {
		if (96 < p[count] && p[count] < 123) {
			p[count]-= 32;
		}else if (64 < p[count] && p[count] < 91) {
			p[count]+= 32;
		}else p[count] = p[count];
	}
	return;
}