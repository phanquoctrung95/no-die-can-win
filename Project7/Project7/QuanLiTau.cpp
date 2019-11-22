#include <iostream>
using namespace std;
struct quanLiTau
{
	char tenTau[5];
	float hanhTrinh;
	float gioBatDau;
	float gioKetThuc;
	char diemKetThuc[100];
	float muongMang;
	float thapCham;
	float nhaTrang;
	float tuyHoa;
	float dieuTri;
	float quangNgai;
	float tamKy;
	float daNang;
	float hue;
	float dongHa;
	float dongHoi;
	float vinh;
	float thanhHoa;
	float ninhBinh;
	float namDinh;
	float phuLy;
};
void nhapDuLieuTau(quanLiTau arr[], int &n);
void nhapDuLieuTau(quanLiTau arr[], int &n){
	cout << "So tau can nhap du lieu : ";
	cin >> n;
	for (int i = 0; i<n; i++){
		cout << "Nhap thong tin tau so " << i + 1 << endl;
		cout << "Ten : " << endl;
		cin >> arr[i].tenTau;
		cout << "Hanh trinh : " << endl;
		cin >> arr[i].hanhTrinh;
		cout << "Gio bat dau : " << endl;
		cin >> arr[i].gioBatDau;
		cout << "Gio ket thuc : " << endl;
		cin >> arr[i].gioKetThuc;
		cout << "Diem ket thuc : " << endl;
		fflush(stdin);
		gets_s(arr[i].diemKetThuc);
		cout << "Gio den ga Muong Mang : " << endl;
		cin >> arr[i].muongMang;
		cout << "Gio den ga Thap Cham : " << endl;
		cin >> arr[i].thapCham;
		cout << "Gio den ga Nha Trang : " << endl;
		cin >> arr[i].nhaTrang;
		cout << "Gio den ga Tuy Hoa : " << endl;
		cin >> arr[i].tuyHoa;
		cout << "Gio den ga Dieu Tri : " << endl;
		cin >> arr[i].dieuTri;
		cout << "Gio den ga Quang Ngai : " << endl;
		cin >> arr[i].quangNgai;
		cout << "Gio den ga Tam Ky : " << endl;
		cin >> arr[i].tamKy;
		cout << "Gio den ga Da Nang : " << endl;
		cin >> arr[i].daNang;
		cout << "Gio den ga Hue : " << endl;
		cin >> arr[i].hue;
		cout << "Gio den ga Dong Ha : " << endl;
		cin >> arr[i].dongHa;
		cout << "Gio den ga Dong Hoi : " << endl;
		cin >> arr[i].dongHoi;
		cout << "Gio den ga Vinh : " << endl;
		cin >> arr[i].vinh;
		cout << "Gio den ga Thanh Hoa : " << endl;
		cin >> arr[i].thanhHoa;
		cout << "Gio den ga Ninh Binh : " << endl;
		cin >> arr[i].ninhBinh;
		cout << "Gio den ga Nam Dinh : " << endl;
		cin >> arr[i].namDinh;
		cout << "Gio den ga Phu Ly : " << endl;
		cin >> arr[i].phuLy;
	}
}
int main(){
	quanLiTau arr[100];
	int n;
	nhapDuLieuTau(arr, n);
}