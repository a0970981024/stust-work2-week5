#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int x,y=1;
	char temp[52] = {0},ctile[52][52],yy[52]={0};
	
	char y[] = {'a','1','b','1','c','1'};
	string stile[52][52] ;
	cout << "請輸入有幾疊牌:";
	cin >> x;//x=2
	
	for (int i = 0 ; i < x; i++) {	//跑兩圈
		cout << "請輸入第" << i+1 << "疊牌:";
		for (int j = 0; j < 52; j++) {  
			cin >> stile[i][j];
			if (cin.get() == '\n') {
				j = 52;
			}else{
				y++;
			}
		}
		temp[x] = y;
		y = 0;
	}

	//if(stile[1][0]=='')
	//cout << "Y=" << y << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < temp[x]; j++) {
			
			
		}
	}



	for(int i = 0; i < x; i++) {
		for (int j = 0; j < 52 ; j++) {
			//cout << yy[j] << endl;
			cout << stile[i][j] << endl;
		}
		
	}
}