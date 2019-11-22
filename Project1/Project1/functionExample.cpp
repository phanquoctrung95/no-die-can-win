#include <iostream>
#include <cstdio>
using namespace std;

// copy lại cái tinhtong roi sửa tên với cách xử lý thôi
// ý là coi lại cho nhớ, ừm, code vài lần là nhớ thôi
// hàm tính tổng 2 số nhập vào
int tinhTong(int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
	int a = 3;
	int b = 5;
	int sumVal = tinhTong(a, b);
	int hieuVal = tinhTong(a, b);
	cout << "Tong 2 so a, b cho truoc: " <<sumVal <<"\n";
	system("pause");

}

// cấu trúc function
// _kiểu dữ liệu trả về_  +  _tên_function_ + (_kiểu dữ liệu của tham số 1_ + _tên tham số 1_,...,...){
// xử lý;
// a= .....
// return a; (a phải thuộc _kiểu dữ liệu trả về_)
//}

// hiểu k 
// viết hàm hiệu 2 số đi
//oke
int tinhHieu(int a, int b){
	int hieu = a + b;
	return hieu;
}

	//Val   value là bắt buột, không, thường là Val viết tắt value thôi,
	// chứ biến đặt sao cũng đc
	// không bị lỗi
	// nhưng viết theo quy tắc chung cho dễ hiểu
	// một project chỉ một hàm main thôi

