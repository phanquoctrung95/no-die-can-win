#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	// Complete the code.
	//Đầu vào bao gồm các giá trị được phân tách bằng dấu cách sau: int , long , char ,      //float và double , tương ứng.
	int iVal;
	long lVal;
	char cVal;
	float fVal;
	double dVal;
	// cai nay khong quan trong.
	//  co hoc cai ni r, ma kh hieu de noi chi @@
	// thi ham scanf nhu cin
	// ham printf nhu cout
	// toc do xu ly cua scanf nhanh hon cin
	// toc do xu ly cua printf nhanh hon cout
	// cu phap su dung cua 2 ham khac nhau thoi
	// scanf voi printf nó cần thêm cái %d để xác định biến đó là kiểu gì thôi
	// %d là kiểu int
	// %ldakieeru long ...
	// oke b
	scanf("%d %ld %c %f %lf", &iVal, &lVal, &cVal, &fVal, &dVal);
	printf("%d\n", iVal);
	printf("%ld\n", lVal);
	printf("%c\n", cVal);
	printf("%f\n", fVal);
	printf("%lf\n", dVal);
	return 0;
}

