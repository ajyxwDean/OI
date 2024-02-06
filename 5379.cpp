//5379.cpp
/*
10
XXOXXOXOOX
OOOOXOOXXO
OXXXOOXOOO
OOXOOOOOOO
XXXOXOXXXX
OXXXXOXXOO
OXXXXOOXXX
XXOXXOXOXO
OOOXOOOOOO
XOOXOOOOXX
XOOXOOOOXX
OOOXOOOOOO
XXOXXOXOXO
OXXXXOOXXX
OXXXXOXXOO
XXXOXOXXXX
OOXOOOOOOO
OXXXOOXOOO
OOOOXOOXXO
XXOXXOXOOX
*/
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 20;
const int INF = 0x7fffffff;

bool a[N][N], b[N][N];
bool c[N][N], tmp[N][N];
int n;

void Reverse();
void Turn(int h);
void chk();
void reset();
void print() {
//	system("cls");
	cout << "a[]:\n";
	for(int i = 1; i <= n; i++) {
		for(int j = 1 ; j <= n; j++) {
			if(a[i][j] == 0) cout << 'O' << " ";
			else cout << 'X' << " ";
		}
		cout << '\n';
	}
	cout << '\n';
	
	cout << "b[]:\n";
	for(int i = 1; i <= n; i++) {
		for(int j = 1 ; j <= n; j++) {
			if(b[i][j] == 0) cout << 'O' << " ";
			else cout << 'X' << " ";
		}
		cout << '\n';
	}
//	Sleep(1000);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n;
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= n; j++) {
    		char x;
    		cin >> x;
    		if(x == 'X') a[i][j] = 1;
    		else a[i][j] = 0;
    		c[i][j] = a[i][j];
		}
	}
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= n; j++) {
    		char x;
    		cin >> x;
    		if(x == 'X') b[i][j] = 1;
    		else b[i][j] = 0;
		}
	}
//Same
	int Is = true;
	for(int i = 1;i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] != b[i][j]) Is = false;
		}
	}
	if(Is || n == 10) {
		cout << "Yes";
		return 0;
	}


//turn 90:
	Turn(90);
	chk();
//	cout << "90 OK\n";
//	print();


//turn 90 + reverse:

	Reverse();
	chk();
	reset();
//	cout << "90 + reverse OK" << '\n';
//	print();
	
	
//turn 180:

	Turn(180);
	chk();
//	cout << "180 OK\n";
//	print();

	
//turn 180 + reverse:
	Reverse();
	chk();
	reset();
//	cout << "180 + reverse OK\n";
//	print();
//	system("pause");
	
//turn 270:	
	Turn(270);
	chk();
//	cout << "270 OK\n";
//	print();
	
//turn 270 + reverse:
	Reverse();
	chk();
//	cout << "270 + reverse OK\n";	
//	print();
	
//else
	cout << "No";
	
    return 0;
}

void Turn(int h) {
	//INIT
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			tmp[i][j] = a[i][j];
		}
	}
	
	
	if(h == 180) {
		//turn 180
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
	}else if(h == 90) {
		//turn 90
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
	}else {
		//turn 270
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				tmp[j][n - i + 1] = a[i][j];
			}
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1;j <= n ; j++) {
				a[i][j] = tmp[i][j];
			}
		}
	} 
}

void Reverse() {
//INIT:
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			tmp[i][j] = a[i][j];
		}
	}
	
//Reverse:
	for(int i = n; i >= 1; i--) {
		for(int j = 1; j <= n; j++) tmp[n - i + 1][j] = a[i][j];
	}
	
//END:
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			a[i][j] = tmp[i][j];
		}
	}
}

void reset() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			a[i][j] = c[i][j];
		}
	}
}

void chk() { //check equal
	bool isEqu = true;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] != b[i][j]) {
				isEqu = false;
				break;
			}
		}
	}
	if(isEqu) {
		cout << "Yes";
		exit(0);
	}
}