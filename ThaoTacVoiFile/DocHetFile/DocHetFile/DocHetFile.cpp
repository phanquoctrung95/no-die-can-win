#include <stdio.h>
#include <iostream>
using namespace std;
void DocHetFile1(char* tenFile)
{
	FILE* fi = fopen(tenFile, "rt");
	float temp;
	while (!feof(fi))
	{
		fscanf(fi, "%f", &temp);
		printf("%0.1f ", temp); 
	}
	printf("\n");
	fclose(fi);
}
void DocHetFile2(char* tenFile)
{
	FILE* fi = fopen(tenFile, "rt");
	float temp;
	while (!feof(fi))
	{
		if (fscanf(fi, "%f", &temp)>0)
			printf("%0.1f ", temp);
		else
			break;
	}
	system("pause");
	printf("\n");
	fclose(fi);
}
void main()
{
	printf("Doc khi khong biet so luong phan tu, doc den het file thi dung:\n");
	cout << "output2 :"; DocHetFile2("input2.txt");
	cout << "output3 :"; DocHetFile2("input3.txt");
	system("pause");
}