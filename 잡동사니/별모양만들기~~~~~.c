#include<stdio.h>
int main()
{
	int i = 0, j=0, k=0;
	for (i = 1; i < 8; i++) {
		printf("%d : ",i);
		if(i<=4){
			for (j = 1; j < 5 - i; j++) {
				printf("0");
			}
			for (k = 1; k < 2 * i; k++) {
				printf("*");
			}		
		}else{
			for (j = 5; j < i + 1; j++) {
				printf("0");
			}
			for (k = 1; k < (16 - 2 * i); k++) {
				printf("*");
			}		
		}
		printf("\n");
	}


	return 0;
}