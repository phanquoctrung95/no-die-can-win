#include <iostream>
#include <cstdio>
using namespace std;
// F2 để đổi tên
// Alt + N dder vo chỗ sửa tên 
// nó có gạch chân chữ N với L kìa,
// return 0; để làm gì
// do hàm  main để kiểu dữ liệu return à int, nên phải return 0 để đúng cú pháp
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
	int max1 = (a>b) ? a : b;
	int max2 = (c>d) ? c : d;
	int max = (max1>max2) ? max1 : max2;
	return max;
}
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}

//hahaa :v
// dùng if đơn giản hơn, nhưng dài
// dùng csai này đơn giản hơnn
// copy code luu r tiếp 