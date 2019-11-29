#include <stdio.h>
#include <stdio.h>
#include <iostream>
void XuatFile(char* tenFile, int* arr, int n)
{
	int s = 0;
	//mo file de ghi
	FILE* fo = fopen(tenFile, "wt"); // wt = write (ghi) + text (dang van ban)
	//ghi du lieu ra file
	for (int i = 0; i < n; i++)
		s = s + i;
	fprintf(fo, "%d ", s);
	// dong file
	fclose(fo);
}
void main()
{
	// mo file de doc
	FILE* fi = fopen("In_MSSV.txt", "rt");
	//doc du lieu
	int n;
	int s = 0;
	fscanf(fi, "%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		fscanf(fi, "%d", &arr[i]);
	//dong file
	fclose(fi);
	// in ra man hinh de kiem tra
	for (int i = 0; i < n; i++)
		s = s + i;
	printf("%d", s);
	system("pause");
	printf("\n");
	// xuat ra file
	XuatFile("out_MSSV.txt", arr, n);
}