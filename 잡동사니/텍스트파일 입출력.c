#include<stdio.h>
int main(void) {
	FILE* scan = fopen("data4.txt", "w");
	FILE* print = fopen("data4.txt", "r");
	FILE* new = fopen("data5.txt", "w");
	char name[20] = { 0, };
	int kor=0, eng=0, total=0;
	fprintf(stdout, "1. 이름 입력 : ");
	fscanf(stdin, "%s", name);
	fputs("2. 국어 점수, 영어 점수 입력 : ", stdout);
	fscanf(stdin, "%d %d", &kor, &eng);
	total = kor + eng;
	fprintf(scan, "%s %d %d %d \n", name, kor, eng, total);
	fprintf(stdout, "%s %d %d %d \n", name, kor, eng, total);
	fscanf(print, "%s %d %d %d", name, &kor, &eng, &total);
	fprintf(new, "%s %d %d %d", name, kor, eng, kor + eng);
	fclose(scan);

	return 0;
}