#include<iostream>

using namespace std;


void sortArr(int* arr, int arrSize) {
	int temp;
	for (int i = 0; i < arrSize; i++)
	{
		for (int  j = 0; j < arrSize; j++)
		{
			if (arr[i] < arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

/*
Дадени са 2 масива с по 5 елемента,
да се сортират 2та масива


*/
int main() {
	int arr[5] = { 10,20,30,40,50 };
	
	int arr2[5] = { 1, 2, 3, 4, 5 };
	int arr3[10];
	sortArr(arr, 5);
	sortArr(arr2, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] <<' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;
	int pointer1 = 0;
	int pointer2 = 0;
	for (int i = 0; i < 10; i++)
	{
		if ((pointer1<5)&&(arr[pointer1] < arr2[pointer2] || pointer2 ==5 ) ) {
			
			
			arr3[i] = arr[pointer1];
			if (pointer1 < 5) {
				pointer1++;
			}
		}
		else {
			
			arr3[i] = arr2[pointer2];
			if (pointer2 < 5) {
				pointer2++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr3[i]<< ' ';
	}

}