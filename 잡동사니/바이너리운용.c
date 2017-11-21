#include<stdio.h>
int main(void) {
	int data1[5] = { 0xff, 0x56, 0x78, 0xfa, 0xf1 };
	int data2[5] = { 0, };
	int size = sizeof(data1) / sizeof(data1[0]), i=0;
	FILE* stream = fopen("student.dat", "wb");
	fwrite(data1, sizeof(int), size, stream);		//binary의 fscanf라 보면 될듯
	fclose(stream);

	stream = fopen("student.dat", "rb");
	fread(data2, sizeof(int), size, stream);		//binary의 fprintf라 보면 될듯
	for (i = 0; i < size; i++) {
		fprintf(stdout,"%x ", data2[i]);
	}
	fclose(stream);
}