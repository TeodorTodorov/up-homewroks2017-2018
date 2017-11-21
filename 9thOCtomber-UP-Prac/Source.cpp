#include<iostream>
using namespace std;


void readAndMultiplyTwoMatrices() {
	int n = 0;
	cin >> n;
	int **arr = new int*[n];
	int **arr2 = new int*[n];
	int **arrResult = new int*[n];
	// initialize the array, who's elements are one dimensional arrays
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		arr2[i] = new int[n];
		arrResult[i] = new int[n];
	}
	// read the two matrices
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	// print the first matrix
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';


		}
		cout << endl;
	}
	// print the second matrix
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';


		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum = 0;
			for (int k = 0; k < n; k++)
			{
				sum += arr[i][k] * arr2[k][j];

			}
			arrResult[i][j] = sum;
		}
	}
	// print the result;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arrResult[i][j] << ' ';


		}
		cout << endl;
	}

	cout << endl;
		// print using pointers;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(*(arr + i) + j) << ' ';
		}
		cout << endl;

	}

}
void printChar(char c, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
}
// Fermat Theorem- not verified working
void readAndCheckMod3() {
	char ch;
	int sum = 0;
	ch =getchar();
	while ('0' <= ch && ch <= '9')
	{
		sum += ch - '0';
		ch = getchar();
	}
	cout << sum%3;
}
void readTwoSentencesAndPrint(){

	
	char* str1 = "gggggggggggggggg gggggrrrr";
	int first;
	int second;
	bool br = false;
	char* str2 = "1fewfewfewf fe333";
	for (int i = 0; i < strlen(str1) && !br; i++)
	{
		for (int j = 0; j <strlen(str2) && !br; j++)
		{
			if (str1[i] == str2[j]) {
				first = i;
				second = j;
				br = true;
				
			}
		}
	}
	if (br) {
		for (int i = 0; i < strlen(str2); i++)
		{
			if (i == second)
			{
				cout << str1 << endl;

			}
			else {
				printChar(' ', first);
				cout << str2[i] << endl;
			}
		}
	}
	else {
		cout << "The two string do not have in common characters";
	}

	 
}
int main() {
	//readAndMultiplyTwoMatrices();
	//readAndCheckMod3();
	readTwoSentencesAndPrint();
		
}





//int main() {
//	int n;
//	cin >> n;
//	int **arr = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new int[n];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	// print the matrix 
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[i][j] << ' ';
//
//
//		}
//		cout << endl;
//	}
//		cout << "elements of main diagonal" << endl;
//		// cout element of main diagonal
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i][i] << ", ";
//		}
//		int sum = 0;
//		cout << endl;
//		// sum of elements of reverse diagonal
//		for (int i = n-1; i >= 0; i--)
//		{
//			sum += arr[n-1 -i][i ];
//		}
//		cout << "the sum is :" << sum << endl;
//
//
//
//		// elements walked by colons
//		cout << "elements by colons" << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << arr[j][i] << ' ';
//
//
//			}
//			cout << endl;
//		}
//
//		cout << endl;
//		cout << "elements walked by diagonals 1 1  , 2 1, 1,2 " << endl;
//		// first half
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				cout << arr[i - j][j] << ' ';
//			}
//			cout << endl;
//		}
//		//// second half
//		//for (int k =n; k<2*n-2; k++)
//		//{
//		//	for (int i = n-1; i>= k-n+1; i--)
//		//	{
//		//		cout << arr[i][k - i] << " ";
//		//	}
//		//	cout << endl;
//		//}
//
//		// second half another
//
//		for (int k = 1; k < n; k++)
//		{
//			for (int j = n-1; j >=k ; j--)
//			{
//				cout << arr[j][n - j + k - 1] << " ";
//			}
//			cout << endl;
//		}
//		// Traverse Spiral
//		int minRow = 0;
//		int minCol = 0;
//		int maxCol = n-1;
//		int maxRow = n-1;
//
//		// n+1 times change direction
//		for (int j = 0; j < n; j++)
//		{
//			 // right 
//			for ( int i = minCol; i <= maxCol; i++)
//			{
//				cout << arr[minRow][i] << ' ';
//			}
//			minRow++;
//			// down
//			for (int i  = minRow;  i<= maxRow; i++)
//			{
//				cout << arr[i][maxCol] << ' ';
//			}
//			maxCol--;
//			// left
//			for (int i = maxCol; i >= minCol; i--)
//			{
//				cout << arr[maxRow][i] << ' ';
//			}
//			maxRow--;
//			// up 
//			for (int i = maxRow; i >=minRow ; i--)
//			{
//				cout << arr[i][minCol] << ' ';
//			}
//			minCol++;
//
//		}
//
//
//		delete[] arr;
//		return 0;
//	}
//