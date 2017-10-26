#include<iostream>
using namespace std;
void printPascalRow(int n) {

	const char dev = ' ';
	int last = 1;
	cout << last << dev << dev;
	for (int i = 0; i < n; i++) {
	
		cout << (last * (n - i) / (i + 1)) << dev << dev;
		last = last * (n - i) / (i + 1);
	}
	cout << endl;
}
/*
double factorial(int n) {
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
void printPascalTriangle(int n) {
	for (int i = 0; i <= n; i++)
	{
		for (int z = 0; z <= (n - i - 2); z++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << factorial(i) / (factorial(j) *factorial(i - j)) << ' ';
		}
		cout << endl;

	}
}
*/
int main() {

	const int N = 10;
	for (size_t i = 0; i < N; i++)
	{
		for (int z = 0; z <= (N - i - 2); z++) {
			cout << " ";
		}
		printPascalRow(i);
	}
	return 0;
}