#include <iomanip>
#include <iostream>
#include <string>
#pragma warning(disable: 26446)
#pragma warning(disable: 26482)
using namespace std;

int main() {
	int x = 0, y = 1, temp[52] = { 0 }, itile[52][52][3], Itile[52] = { 0 }, temp2[52];
	for (int i = 0; i < 51; i++) {
		temp2[i] = i;
		for (int j = 0; j < 51; j++) {
			for (int t = 0; t < 3; t++) {
				itile[i][j][t] = -1;
			}
		}
	}
	char ctile[52][52][3] = { 0 };
	string stile[52][52], cpstile[52];
	cout << "請輸入有幾疊牌:";
	cin >> x;

	for (int i = 0; i < x; i++) {
		cout << "請輸入第" << i + 1 << "疊牌:";
		for (int j = 0; j < 52; j++) {
			cin >> stile[i][j];
			if (cin.get() == '\n') {
				j = 52;
			}
			else {
				y++;
			}
		}
		temp[i] = y;
		y = 1;
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < temp[i]; j++) {
			for (int t = 0; t < 3; t++) {
				ctile[i][j][t] = stile[i][j][t];
				itile[i][j][t] = ctile[i][j][t];
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < temp[i]; j++) {
			switch (itile[i][j][0]) {
			case 115:
			case 83:	//s
				Itile[j] = itile[i][j][0] + itile[i][j][1] + itile[i][j][2] + 300;
				if (itile[i][j][2] > -1) Itile[j] += 8;
				break;
			case 104:
			case 72://h
				Itile[j] = itile[i][j][0] + itile[i][j][1] + itile[i][j][2] + 200;
				if (itile[i][j][2] > -1) Itile[j] += 8;
				break;
			case 100:
			case 68://d
				Itile[j] = itile[i][j][0] + itile[i][j][1] + itile[i][j][2] + 100;
				if (itile[i][j][2] > -1) Itile[j] += 8;
				break;
			case 99:
			case 67://c
				Itile[j] = itile[i][j][0] + itile[i][j][1] + itile[i][j][2];
				if (itile[i][j][2] > -1) Itile[j] += 8;
				break;
			default:
				break;
			}
			//cout << '\n' << Itile[j] << endl;
		}

		cout << '\n';
		cout << "第" << i + 1 << "疊牌: ";
		for (int r = 0; r < temp[i]; r++) {
			for (int t = 0; t < temp[i]; t++) {
				if (Itile[t] < Itile[t + 1]) {
					Itile[t] += Itile[t + 1];
					Itile[t + 1] = Itile[t] - Itile[t + 1];
					Itile[t] -= Itile[t + 1];

					temp2[t] += temp2[t + 1];
					temp2[t + 1] = temp2[t] - temp2[t + 1];
					temp2[t] -= temp2[t + 1];
				}
			}
		}
		for (int n = 0; n < temp[i]; n++) {
			cout << stile[i][temp2[n]] << ' ';
		}
		for (int q = 0; q < 52; q++) {

			temp2[q] = q;
		}
		cout << '\n';
	}

}