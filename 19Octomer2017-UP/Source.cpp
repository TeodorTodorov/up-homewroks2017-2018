#include<iostream>
using namespace std;

int main()
{
//	char kingSym, queenSym;
//	int kingNum,queenNum;
//	cin >> kingSym >> kingNum >> queenSym >> queenNum;
//	// check straight lines and subtract coordinates and compare them by absolute value
//	if (kingNum == queenNum || kingSym == queenSym|| abs(kingNum - queenNum) == abs(kingSym - queenNum)) {
//		cout << 'shah';
//	}
//	//cout << (kingNum == queenNum || kingSym == queenSym || abs(kingNum - queenNum) == abs(kingSym - queenNum)) ? "shah" : "hoqta";
//	
	cout << 10 % 10;
	int a, b;

	cin >> a;
	b = a;
	/*switch (a) {
	case 1: cout << "kola"; break;
	case 2: cout << "kola2"; break;
	case 3: cout << "kola3"; break;
	default: cout << "butona ne reboti";
	}*/

	int remainder = 0;
	int digits = 0;
	while (a / 10 != 0 || a &10 !=0) {
		digits++;
		a /= 10;
	}
	for ( digits >= 0; digits--;)
	{
		remainder = b / pow(10,digits);
		cout <<remainder % 10;
	}
	return 0;
/*
int a ;
cin >> a;
int s = 0;
do {
s = s*10+a%10;
a /= 10;
}
while(a);
cout << endl;



*/
}