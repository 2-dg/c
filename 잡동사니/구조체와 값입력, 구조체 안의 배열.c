//만든이 : 이동규
#include<stdio.h>
int i = 0;
struct point {
	int a, b;
	int array[3];
};
struct rectangle {
	struct point a, b;
};
typedef struct rectangle rec;
void scan(rec* p);
int main(void) {
	rec aaa[3] = {0,};
	scan(aaa);
	for (i = 0; i < 3; i++) {
		printf("%d %d %d\n", aaa[i].a.a, aaa[i].a.b, aaa[i].a.array[i]);
	}
}
void scan(rec* p) {
	for (i = 0; i < 3; i++) {
		printf("값 입력 : ");
		scanf("%d %d %d", &p[i].a.a, &p[i].a.b, &p[i].a.array[i]);
	}
}