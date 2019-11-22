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
	int minInt = INT_MIN;
	int maxInt = INT_MAX;
	cout << "Tong 2 so a, b cho truoc: " << sumVal << "\n";
	system("pause");

}