//ABCCBA만들기
#include<stdio.h>
void change_array(char* a, char* b);
int main(void) {
	char a[6] = { 'A','B','C' };          //abc라도 주면 나머지엔 0이 들어감. 아예 다 안넣으면 쓰레기값이 들어감.
	char b[6] = {0,};					  //초기값을 하나라도 넣어줘야 나머지 애들도 초기화된다.
	int count = 0;                 
	for (; count < 3; count++) {
		b[count] = a[count];
		printf("%c ", b[count]);
	}
	for (count=3; count < 6; count++) {
		b[count] = a[5-count];
		printf("%c ", b[count]);
	}
	printf("\n");
	for (count=0; count < 6; count++) {
		if (count < 3) {
			b[count] = a[count];
			printf("%c ", b[count]);
		}else {
			b[count] = a[5 - count];
			printf("%c ", b[count]);
		}
	}
	printf("\n%c", &a[0]);
	return 0;
}
void change_array(char* a, char* b); {
	int i = 0;
	for (i = 0; i < 6; i++) {
		if(i<3){
			b[i] = a[i];
		}else {
			b[i] = a[5 - i];
		}
	}
}