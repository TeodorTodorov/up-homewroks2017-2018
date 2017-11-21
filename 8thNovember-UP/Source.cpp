#include<iostream>
using namespace std;

int main() {
	//// Assigment 1
	//// check how many times one number is contained in secong 
	//int a, b, counter,temp, digitsA;
	//cin >> a >> b;
	//int digitsA = 0;
	//temp = a;
	//while (temp >0)
	//{
	//	++digitsA;
	//	temp /= 10;
	//}
	//while (b>0)
	//{
	//	if (b % (int) pow(10,digitsA)== a)
	//	{
	//		++counter;
	//	}
	//	b / 10;
	//}
	//return 0;




	//IDEA 2 : CLOSE TO SOLUTION NOT WORKING
	//// TODO :fix line 18
	//int a, b;
	//cout << 877677747 % 77;
	//cin >> a >> b;
	//int a1, b2;
	//a1 = a;
	//b2 = b;
	//int count = 0;;
	//while (b/10 >0)
	//{
	//	
	//	if ((b % a == 0 || (b-a)% a) && (b%10 !=0)) {
	//		count++;

	//	}
	//	
	//	b /= 10;
	//}
	//cout << count;



	 //Asisgment 2
	bool flag = false;
	int n;
	cin >> n;
	int arr[50];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n && flag == false; i++)
	{
		for (int j = i+1; j < n && flag == false; j++)
		{
			if (arr[i] == arr[j]) {
				flag = true;
			}
		}
	}
	cout << (flag ? "ima 2 ednakvi" : "ne nqma");


	// BubleSort
	int tmp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j + 1]) {
				tmp == arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int  i = 0; i < n-1; i++)
	{
		cout << arr[i] << " ";

	}
	cout << arr[n - 1];
	return 0;
	
}