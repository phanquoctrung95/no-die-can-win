#include <iostream>
using namespace std;
struct canBo
{
	int maCanBo;
	char hoTen[];
	float hsl;
	int ngayCong;
}b[100];
void nhapDanhSach(canBo b[], int &n){
	cout << "So can bo vua nhap la : "; cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Nhap can bo thu " << i + 1 << endl;
		cout << "Nhap ma can bo : "; cin >> b[i].maCanBo; cout << endl;
		cout << "Nhap ho va ten : "; cin >> gets(b[i].hoTen); cout << endl;
		cout << "Nhap he so luong : "; cin >> b[i].hsl; cout << endl;
		cout << "Nhap ngay cong : "; cin >> b[i].ngayCong; cout << endl;
	}
}
void inDanhSach(canBo b[], int n){
	cout << "\tSTT \tMSCB \tHe so luong \tLuong" << endl;
	for (int i = 0; i<n; i++)
	{
		cout << "\t" << i + 1 << "\t" << b[i].maCanBo << "\t" << b[i].hsl << "\t\t" << float(b[i].hsl*b[i].ngayCong * 560000) / 1000000 << "tr";
	}
}
int main(){
	int a;
	canBo b[100];
	nhapDanhSach(b, a);
	inDanhSach(b, a);
}
