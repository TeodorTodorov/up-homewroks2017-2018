#include<iostream>
using namespace std;
int main() {
	char str[7] = "123456";
	str[2] = 25;
	cout << str[2];
	cout << endl;
	char* str2 = str;
	str2[2] = '7';
	cout << str2[2];


	return 0;
}