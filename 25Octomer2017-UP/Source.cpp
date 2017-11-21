#include<iostream>
using namespace std;


void printPascalRow(int n) {
	
	int last = 1;
	cout << last;
	for (int i = 0; i < n; i++) {
		cout << (last * (n - i) / (i + 1));
		last = last * (n - i) / (i + 1);
	}
}

double factorial(int n) {
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
void printPascalTriangle(int n ) {
	for (int i = 0; i <= n; i++)
	{
		for(int z = 0; z <= (n - i - 2); z++){
			cout << " ";
		} 
		for (int j = 0;  j<= i; j++)
		{
			cout << factorial(i) / (factorial(j) *factorial(i - j)) << ' ';
		}
		cout << endl;

	}
}
void eRostenPrintAllPRimesTo(int n) {
	//TODO: Implement
	int arr[1000];
		for (int i = 0; i < 1000; i++)
		{
			arr[i] = true;
		}
	for (size_t i = 0; i < sqrt(n); i++)
	{

	}

}

int fibanocci(int n) {

	int current;
	int old = 0;
	int prev = 1;
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	
	else {
		for (int i = 2; i <= n; ++i)
		{
			current = old + prev;
			old = prev;
			prev = current;
		}
		return current;
	}

}


double calculator(int a, char op, int b) {
	double result;
	switch (op)	{
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = (double) a / b; break;
	case '%': result = a % b; break;
	case '^': result = pow(a,b); break;
	default: result = 0;
		cout << "error";
		break;
	}
	return result;
}
void findmin3(int a, int b, int c) {

	if (a <= b && a <= c) {
		cout << a;
	}
	else {
		if (c > b) {
			cout << b;
		}
		else {
			cout << c;
		}
	}
	cout << endl;

}
void sort3Nums(int a, int  b, int c) {
	int min = a;
	int temp;
	int middle;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << ' ' << b << ' ' << c << endl;
	}



int main() {
	int a, b, c;
	char op;
	//cin >> a >> b >> c;
	//findmin3(a, b, c);
	//sort3Nums(a, b, c);
	/*cin >> a >> op >> b;
	cout << calculator(a, op, b);*/
	//cout << fibanocci(8);
	 //TODO :://eRostenPrintAllPRimesTo(40);
	//printPascalTriangle(10);
	printPascalRow(3);
	return 0;
	}