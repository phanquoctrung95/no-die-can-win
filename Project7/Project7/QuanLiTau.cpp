#include <iostream>
using namespace std;
struct quanLiTau
{
	char tenTau[5];
	float hanhTrinh;
	float gioBatDau;
	float gioKetThuc;
	char diemKetThuc[100];
	float arrGaTau[16];
};
void nhapDuLieuTau(quanLiTau arr[], int &n);
void InThongTin(quanLiTau arr[], char ten2[]);
void nhapDuLieuTau(quanLiTau arr[], int &n){
	cout << "So tau can nhap du lieu : ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "\n Nhap thong tin tau so " << i + 1;
		cout << "\n Ten : ";
		cin >> arr[i].tenTau;
		cout << "\n Hanh trinh : ";
		cin >> arr[i].hanhTrinh;
		cout << "\n Gio bat dau : ";
		cin >> arr[i].gioBatDau;
		cout << "\n Gio ket thuc : ";
		cin >> arr[i].gioKetThuc;
		cout << "\n Diem ket thuc : ";
		fflush(stdin);
		gets_s(arr[i].diemKetThuc);
		cout << "\n Gio den ga Muong Mang : ";
		cin >> arr[i].arrGaTau[0];
		cout << "\n Gio den ga Thap Cham : ";
		cin >> arr[i].arrGaTau[1];
		cout << "\n Gio den ga Nha Trang : ";
		cin >> arr[i].arrGaTau[2];
		cout << "\n Gio den ga Tuy Hoa : ";
		cin >> arr[i].arrGaTau[3];
		cout << "\n Gio den ga Dieu Tri : ";
		cin >> arr[i].arrGaTau[4];
		cout << "\n Gio den ga Quang Ngai : ";
		cin >> arr[i].arrGaTau[5];
		cout << "\n Gio den ga Tam Ky : ";
		cin >> arr[i].arrGaTau[6];
		cout << "\n Gio den ga Da Nang : ";
		cin >> arr[i].arrGaTau[7];
		cout << "\n Gio den ga Hue : ";
		cin >> arr[i].arrGaTau[8];
		cout << "\n Gio den ga Dong Ha : ";
		cin >> arr[i].arrGaTau[9];
		cout << "\n Gio den ga Dong Hoi : ";
		cin >> arr[i].arrGaTau[10];
		cout << "\n Gio den ga Vinh : ";
		cin >> arr[i].arrGaTau[11];
		cout << "\n Gio den ga Thanh Hoa : ";
		cin >> arr[i].arrGaTau[12];
		cout << "\n Gio den ga Ninh Binh : ";
		cin >> arr[i].arrGaTau[13];
		cout << "\n Gio den ga Nam Dinh : ";
		cin >> arr[i].arrGaTau[14];
		cout << "\n Gio den ga Phu Ly : ";
		cin >> arr[i].arrGaTau[15];
	}
}

// nhap vao ten tau
// xuat ra thong tin cua tau
char *layTenGa(int viTri){
	switch (viTri){
	case 0:
		return "Muong Mang"; break;
	case 1:
		return "Thap Cham"; break;
	case 2:
		return "Nha Trang"; break;
	case 3:
		return "Tuy Hoa"; break;
	case 4:
		return "Dieu Tri "; break;
	case 5:
		return "Quang Ngai"; break;
	case 6:
		return "Tam Ky"; break;
	case 7:
		return "Dang Nang"; break;
	case 8:
		return "Hue"; break;
	case 9:
		return "Dong Ha"; break;
	case 10:
		return "Dong Hoi"; break;
	case 11:
		return "Vinh"; break;
	case 12:
		return "Thanh Hoa"; break;
	case 13:
		return "Ninh Binh"; break;
	case 14:
		return "Nam Dinh"; break;
	case 15:
		return "Phu Ly"; break;
	default:{
				return "0";
		}
	}

}
//input tenGa , sửa tên biến lại
// output là gì ?của hàm ni hả um vitri
// vị trí gì ?
// của ga tàu trong mảng, tiếp
int nhapTenGa(char *tenGa){

	if (strcmp(tenGa, "Muong Mang")==0){
		return 0;
	}
	else if (strcmp(tenGa, "Thap Cham")==0){
		return 1;
	}
	else if (strcmp(tenGa, "Nha Trang")==0){
		return 2;
	}
	else if (strcmp(tenGa, "Tuy Hoa")==0){
		return 3;
	}
	else if (strcmp(tenGa, "Dieu Tri")==0){
		return 4;
	}
	else if (strcmp(tenGa, "Quang Ngai")==0){
		return 5;
	}
	else if (strcmp(tenGa, "Tam Ky") == 0){
		return 6;
	}
	else if (strcmp(tenGa, "Da Nang") == 0){
		return 7;
	}
	else if (strcmp(tenGa, "Hue") == 0){
		return 8;
	}
	else if (strcmp(tenGa, "Dong Ha") == 0){
		return 9;
	}
	else if (strcmp(tenGa, "Dong Hoi") == 0){
		return 10;
	}
	else if (strcmp(tenGa, "Vinh") == 0){
		return 11;
	}
	else if (strcmp(tenGa, "Thanh Hoa") == 0){
		return 12;
	}
	else if (strcmp(tenGa, "Ninh Binh") == 0){
		return 13;
	}
	else if (strcmp(tenGa, "Nam Dinh") == 0){
		return 14;
	}
	else if (strcmp(tenGa, "Phu Ly") == 0){
		return 15;
	}
	else {
		return -1;
	}

}
void InThongTin(quanLiTau arr[], int sizeArr, char ten[]){

	for (int i = 0; i < sizeArr; i++){
		if (strcmp(arr[i].tenTau, ten) == 0){
			cout << "\n Ten tau : " << arr[i].tenTau;
			cout << "\n Gio bat dau : " << arr[i].gioBatDau << endl;
			for (int j = 0; j < 16; j++){
				if (arr[i].arrGaTau[j] != 0){
					cout << layTenGa(j) << ": " << arr[i].arrGaTau[j] << "gio\n";
				}
			}
		}
	}
	system("pause");
}
//input ten tau, ten ga
//output in rathong tin
void InGioDenTaiGa(quanLiTau arr[], int sizearr, char tenTau[], char tenGa[]){
	for (int i = 0; i < sizearr; i++){
		if (strcmp(tenTau, arr[i].tenTau) == 0){
			int viTri = nhapTenGa(tenGa);// cho này muốn viTri =  bao nhiêu = 7 giá trị hiện tại trả ra là bao nhiêu 0
			// debug tiếp
			cout << tenGa << ": " << arr[i].arrGaTau[viTri];
		}
	}
	system("pause");
}
//input tentau
//output gatau
void InCacGaTauDen(quanLiTau arr[], int sizearr, char tenTau[]){
	for (int i = 0; i < sizearr; i++){
		if (strcmp(tenTau, arr[i].tenTau) == 0){
			for (int j = 0; j < 16; j++){
				if (arr[i].arrGaTau[j] != 0){
					cout << layTenGa(j) << ": " << arr[i].arrGaTau[j] << " gio\n";
				}
			}
		}
	}
	system("pause");
}
//input tenGa
//output tenTau,gio;
void InGioCacTauDenGa(quanLiTau arr[], int sizearr, char tenTau[],char tenGa[]){
	int viTri = nhapTenGa(tenGa);
	for (int i = 0; i < sizearr; i++){
		if (arr[i].arrGaTau[viTri] != 0){
			cout << arr[i].tenTau << ": " << arr[i].arrGaTau[viTri] << endl;
		}
	}
	system("pause");
}
void InBang(quanLiTau arr[], int sizearr){
	cout << "Ten tau      ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].tenTau << "gio  ";
	}
	cout << "\nHanh trinh ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].hanhTrinh << "gio  ";
	}
	cout << "\nSaiGon di  ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].gioBatDau << "gio  ";
	}
	cout << "\n";
	cout << "\nMuong Mang   ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[0] << "gio  ";
	}
	cout << "\nThap Cham    ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[1] << "gio  ";
	}
	cout << "\Nha Trang    ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[2] << "gio  ";
	}
	cout << "\nTuy Hoa     ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[3] << "gio  ";
	}
	cout << "\nDieu Tri    ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[4] << "gio  ";
	}
	cout << "\nQuang Ngai  ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[5] << "gio  ";
	}
	cout << "\nTam Ky      ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[6] << "gio  ";
	}
	cout << "\nDa Nang     ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[7] << "gio  ";
	}
	cout << "\nHue         ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[8] << "gio  ";
	}
	cout << "\nDong Ha    ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[9] << "gio  ";
	}
	cout << "\nDong Hoi   ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[10] << "gio  ";
	}
	cout << "\nVinh       ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[11] << " gio  ";
	}
	cout << "\nThanh Hoa  ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[12] << "gio  ";
	}
	cout << "\nNinh Binh  ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[13] << "gio  ";
	}
	cout << "\nNam Dinh   ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[14] << "gio  ";
	}
	cout << "\nPhu Ly     ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].arrGaTau[15] << "gio  ";
	}
	cout << "\nHa Noi     ";
	for (int i = 0; i < sizearr; i++){
		cout << arr[i].diemKetThuc<< "gio  ";
	}
	system("pause");
}
int main(){
	quanLiTau arrTau[100];
	int size;
	char tenTau[20];
	char tenGa[20];
	nhapDuLieuTau(arrTau, size);
	cout << "Nhap vao ten tau can in thong tin : ";
	cin >> tenTau;
	InThongTin(arrTau, size, tenTau);
	char *layTenGa();
	//bổ sung menu để chọn hiển thị:
	/*
	Moi ban lua chon hien thi:
	1. Xuat ra gio den  cua tau T tai ga G.
	2. Xuat ra gio den cac ga cua mot tau T nao do.
	3. Xuat ra gio cac tau den mot ga G nao do.
	4. Xuat ra bang thong tin chi tiet cua cac tau.
	0. Thoat chuong trinh
	Lua chon cua ban la: ...

	*/
	int iChoose = 1;
	while(iChoose>0){

		cout<< "Moi ban lua chon hien thi: ";
		cout<< "\n1. Xuat ra gio den  cua tau T tai ga G. ";
		cout<< "\n2. Xuat ra gio den cac ga cua mot tau T nao do. ";
		cout<< "\n3. Xuat ra gio cac tau den mot ga G nao do. ";
		cout<< "\n4. Xuat ra bang thong tin chi tiet cua cac tau. ";
		cout<< "\n0. Thoat chuong trinh ";
		cout<< "\nLua chon cua ban la: "; cin >>iChoose;
		switch (iChoose)
		{
			case 1:	cout << "Nhap vao ten tau : ";
					cin >> tenTau;
					cout << "Nhap vao ten ga : ";
					fflush(stdin);
					gets_s(tenGa);
					InGioDenTaiGa(arrTau, size, tenTau, tenGa);
					break;
			case 2:	cout << "Nhap vao ten tau : ";
					cin >> tenTau;
					InCacGaTauDen(arrTau, size, tenTau);
					break;
			case 3: cout << "Nhap vao ten ga : ";
					fflush(stdin);
					gets_s(tenGa);
					InGioCacTauDenGa(arrTau, size, tenTau, tenGa);
					break;
			case 4: InBang(arrTau, size);
				break;
			default:
				break;
		}
	}
	system("cls");
}