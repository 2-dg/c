//������ : �̵���
#include<stdio.h>
int main(void) {
	int k = 0;
	int a[5] = { 10,20,30,40,50 };
	printf("a[0]=%d\n", a);
	printf("a[4]= %d, \n", &a[4]);
	printf("k=%d   ", *(int*)(&k - 7)); //�ּ� 4BYTE����. int���� 1���� �迭�̱� ����. k���� �ּ����̴�
	printf("k�ּ� = %d\n", &k);        //�迭�� 5ĭ Ȯ���ż�(0~4) 24BYTE, �ű⿡ k�� �������� a[4]��
									 //3BYTE�������ִ�. �׳� �׶��׶� �ٸ� ������ �����°��δ�.

	printf("k=%d, %d, %d \n", *(a + 7), &a[7], &a[-1]);
	return 0;
}