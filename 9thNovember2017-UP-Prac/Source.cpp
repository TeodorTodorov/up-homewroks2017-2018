#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int **arr = new int*[n] ;
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	// print the matrix 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';
		
			cout << endl;
	}
	cout << "elements of main diagonal" << endl;
	// cout element of main diagonal
	for (int i = 0; i < n; i++)
	{
		cout << arr[i][i]<< ", ";
	}

	// sum of elements of reverse diagonal

	delete[] arr;
	return 0;
}