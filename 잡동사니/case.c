#include<stdio.h>
int main()
{
	int a; //switch����
	int b, c, d; //�����ܺ���
	int e; //case2����
	int f, g, h, i; //case3����	
	h = 0;
back:
	printf("1,2,3�� �ϳ��� �Է� : ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		for (b = 2; b<10; b++)
		{
			for (c = 1; c<10; c++)
			{
				d = b*c;
				printf("%d * %d = %d \n", b, c, d);
			}
			printf("-----------\n");
		}
		break;
	case 2:
		for (e = 0; e <= 100; e += 5)
		{
			printf("%d \n", e);
		}
		break;
	case 3:
		for (f = 5; f >= 1; f--)             // f=5���� ����. g=1. h=0���� h++�� ���� h=1
		{								     // h�� ����Ʈ = 1, ������ g=2, h=2. 2�� ����Ʈ
			for (g = 1; g <= f; g++)		 // f=5�̹Ƿ� g<=f�� ���� h++�� ����Ʈ ������ 5�� �ݺ�
			{								 // ��� 1 2 3 4 5 (1�� �ϼ�, ���� h���� 5)
				h++;						 //
				printf("%3d", h);			 // ó�������� f--�� ���� f=4. f>=1����.
			}								 // ������ �������� h++�� ���� h=6. f=4�̹Ƿ� 
			printf("\n");					 // 34���� g <= f�� ���� 4�� �ݺ� -> 6 7 8 9 ���
			for (i = 1; i <= 7 - g; i++)	 // �̰� �ݺ��ϸ� ���� ���� ���´�
			{
				printf("   ");
			}
		}break;
	default:
		printf("�ٽ� �Է��Ͻÿ� \n");
		break;
	}goto back;
}