#include<stdio.h>
int main()
{
	int i=2, j=1, result=0;

	while(i<10)
	{
		while(j<10)
		{
			result=i*j;
			printf("%d * %d = %d \n", i, j, result);
			j++;
		}
		i++, j=1;
		printf("-------------\n");
	}


	return 0;
}