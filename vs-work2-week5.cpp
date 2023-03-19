#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int x = -1, total = 0;
	char temp[9999] = { 0 }, cptemp[9999] = { 0 };
	cout << "請輸入一整數:";
	cin >> temp;
	
	for (int i = 0; i < 9998; i++) {
		if (temp[i] != 0) {
			cptemp[i] = temp[i];
		//	cout << "temp[" << i << "]=" << temp[i]<<endl;
		//	cout << "cptemp[" << i << "]=" << cptemp[i] << endl;
			x++;
		}
	}

	int cpx = x;
	for (int i = 0; i < x; i++) {
		if (cptemp[cpx] == temp[i]) {
			total++;
			cpx--;
		}
	}

	if (total == x) {
		cout << "是" << endl;
	}else {
		cout << "否" << endl;
	}
}