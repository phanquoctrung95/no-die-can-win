#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
void XuatFileChiSoLe(char* tenFile, int* arr, int n)
{
	//mo file de ghi
	FILE* fo = fopen(tenFile, "wt"); // wt = write (ghi) + text (dang van ban)
	//ghi du lieu ra file
	for (int i = 1; i < n; i=i+2)
	fprintf(fo, "%d ", arr[i]);
	// dong file
	fclose(fo);
}
void XuatFileTong(char* tenFile, int* arr, int n){
	int s = 0;
	FILE* fo = fopen(tenFile, "wt");
	for (int i = 0; i < n; i++){
		s = s + arr[i];
	}
	fprintf(fo, "%d", s);
	fclose(fo);
}
int main()
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
	int chon;
	do{
		cout << "Moi ban chon : ";
		cout << "\n1.Xuat gia tri o vi tri le trong mang ra mang hinh va File ";
		cout << "\n2.Xuat tong ra mang hinh va File ";
		cout << "\nNhap cong viec thuc hien : \n";
		cin >>chon;
		switch(chon){
		case 1:for (int i = 1; i < n; i = i + 2){
				   cout << arr[i]<<" ";
		}
			   XuatFileChiSoLe("out_MSSV.txt", arr, n);
				break;
		case 2:for (int i = 0; i < n; i++){
				   s = s + arr[i];
		}
			   cout << s;
			   XuatFileTong("out_MSSV.txt", arr, n);
				break;
			default:
				break;
		}
		system("pause");
		system("cls");
		goto tt;
	}while(chon!=0);
tt:;
}