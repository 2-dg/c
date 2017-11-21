#include<stdio.h>
#include<string.h>
int main(void) {
	int i = 0, j=0;
	char word[4][20] = { {"dddd"}, {"adwadw"}, {"sdfbd"},{"dfhfjf"} };
	char temp[20] = { 0, };
	fputs("출력할 단어는 \n", stdout);
	
	for (i = 0; i < 3; i++) {
		for(j = i; j < 3 ; j++) {
			if (strcmp(word[i], word[j]) > 0) {
				strcpy(temp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], temp);
			}
		}
	}
	for (i = 0; i < 3; i++) {
		fputs(word[i], stdout);
		fputs("\n", stdout);
	}
	return 0;
}