//만든이 : 이동규
#include<stdio.h>
int main(void) {
	int k = 0;
	int a[5] = { 10,20,30,40,50 };
	printf("a[0]=%d\n", a);
	printf("a[4]= %d, \n", &a[4]);
	printf("k=%d   ", *(int*)(&k - 7)); //주소 4BYTE차이. int선언에 1차원 배열이기 때문. k와의 주소차이는
	printf("k주소 = %d\n", &k);        //배열이 5칸 확보돼서(0~4) 24BYTE, 거기에 k는 여분으로 a[4]와
									 //3BYTE떨어져있다. 그냥 그때그때 다른 여분이 나오는가부다.

	printf("k=%d, %d, %d \n", *(a + 7), &a[7], &a[-1]);
	return 0;
}