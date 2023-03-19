#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int x;
	char c;
	string temp;
	cout << "請輸入有幾疊牌:";
	cin >> x;
	string tile[52][52] ;
	
	for (int i = 1 ; i <= x; i++) {
		
		cout << "請輸入第" << i << "疊牌:";
		for (int j = 0; j < 52; j++) {

		}
	}

	for(int i = 1; i <= x; i++) {
		for (int j = 0; j < 52; j++) {
			cout << tile[i][j] << endl;
		}
		
	}
}