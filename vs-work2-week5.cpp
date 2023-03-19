#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int x,y = 0;
	cout << "請輸入你要判斷的整數數字:";
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if ( x % i == 0) {
			y++;
		}
	}
	if (y == 2) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
}