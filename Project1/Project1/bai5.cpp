#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	// Complete the code.
	// hiểu đề chưa
	//nine la sao
	// cho 2 số a, b (b>a)
	// For each integer  in the interval a,b :
	// với mỗi số c trong khoảng a đến b
	// nếu c>=1 và c<=9 thì in đại diện tiếng anh của nó ra: one, two,...
	// nếu c>9 và là số chẵn thì in: even
	// nếu c>9 và là số lẻ thì in: odd
	// CTRL + shift + phím -> hoặc <- để bôi đen 1 từ
	int a, b;
	cin >> a >> b;
	// Hiểu đề chưa
	// for la de in may so o trong khoang a,b hả
	// giống như bài trước, nhưng bỏ cái if trong vofnng for
	// số 1 chỗ này lại vô chỗ i>=a nó fail mẹ rồi
	// fail thì nó tăng thêm i++
	// không
	// fail thì nó return, out khỏi cái for
	// for (int i=1;i>=a&&i<=b;i++)
	// biết rồi @@:))
	// sửa đi
	// biết sai gì k
	// chưa biết
	// break line, xuống dòng
	for (int i = a; i <= b; i++)
	{
		if (i == 1)
			cout << "one" << endl;
		else if (i == 2)
			cout << "two" << endl;
		else if (i == 3)
			cout << "three" << endl;
		else if (i == 4)
			cout << "four" << endl;
		else if (i == 5)
			cout << "five" << endl;
		else if (i == 6)
			cout << "six" << endl;
		else if (i == 7)
			cout << "seven" << endl;
		else if (i == 8)
			cout << "eight" << endl;
		else if (i == 9)
			cout << "nine" << endl;
		else if (i>9 && i % 2 == 0)
			cout << "even" << endl;
		else if (i>9 && i % 2 == 1)
			cout << "odd" << endl;
	}
	return 0;
}

