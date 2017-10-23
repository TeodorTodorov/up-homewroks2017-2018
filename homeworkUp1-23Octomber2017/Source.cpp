#include<iostream>

using namespace std;
double getNthFibGoldenRatioFormula(int n);
int getNthFibanocciIterative(int n);
int computeNthFibRecursionWitchCounter(int prev, int prev2, const int& n, int&count);
int getNthFibTrueRecursion(int n);
void printAllPrimeNumbersTo(int n);
bool isPrime(int _n);



int main() {
	const int N = 30;
	const int V = 500;
	int count = 2;
	cout << computeNthFibRecursionWitchCounter(1, 1, N, count) << endl;
    cout << getNthFibanocciIterative(N) << endl;
	cout << getNthFibGoldenRatioFormula(N) << endl;
	cout << getNthFibTrueRecursion(N)<< endl;
	printAllPrimeNumbersTo(V);
	return 0;
}

int getNthFibTrueRecursion(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	 return getNthFibTrueRecursion(n - 1) + getNthFibTrueRecursion(n - 2);

}

int computeNthFibRecursionWitchCounter(int prev, int prev2, const int& n, int&count) {

	int temp = prev2;
	int result = prev + prev2;
	prev2 = prev;
	prev = result;
	count = count + 1;
	if (count == n) {
		return result;
	}
	computeNthFibRecursionWitchCounter(prev, prev2, n, count);


}
int getNthFibanocciIterative(int n) {
	if (n < 3 && n>0) {
		return 1;
	}

	int prev1 = 1;
	int prev2 = 1;
	int temp = 0;
	for (int i = 0; i < n-2; i++)
	{
		temp = prev1;
		prev1 += prev2;
		prev2 = temp;

	}
	return prev1;
}

double getNthFibGoldenRatioFormula(int n) {
	double result;
	result = (1 / sqrt(5))* pow(((1 + sqrt(5)) / 2.0), n);
	return result;
}
bool isPrime(int _n) {
	for (int i = 2; i < sqrt(_n); i++)
	{
		if (_n %i == 0) {
			return false;
		}
	}
	return true;
	
}
void printAllPrimeNumbersTo(int n) {
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i))
		{
			cout << i << ' ';
		}
	}
}