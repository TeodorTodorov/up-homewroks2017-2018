#include<iostream>
using namespace std;

/*

1
Да се напише програма,
която прочита две цели числа,
побиращи се в тип int, и проверява
дали множествата от цифрите им съвпадат.
Програмата да извежда “Yes” при съвпадение и “No” в
противен случай. Числата могат да бъдат и отрицателни.
В такъв случаи минусът се “игнорира”, т.е едно отрицателно
число има същото множество от цифри като абсолютната си стойност.


*/
/*
int modulo(int n) {
	if (n < 0) {
		return -n;
	}
}
int main() {
	int arrA[10];
	int arrB[10];
	int a, b, a1, b1, countA, countB;
	countA = 0; countB = 0;
	cin >> a >> b;
	a1 = a;
	b1 = b;
	while (a1 > 0)
	{
		countA++;
		a1 /= 10;
	};
	while (b1 > 0) {

		countB++;
		b1 /= 10;
	}
	// Init arrays

	for (int i = 0; i < 10; i++)
	{
		arrA[i] = 0;
		arrB[i] = 0;
	}
	for (int i = 0; i < countA; i++)
	{
		arrA[a % 10] = 1;
		a /= 10;
	}
	for (int i = 0; i < countB; i++)
	{
		arrB[b % 10] = 1;
		b /= 10;
	}
	bool areEqual = true;
	for (int i = 0; i <10; i++)
	{
		if (arrA[i] != arrB[i]) {
			areEqual = false;
		}
	}
	cout << areEqual ? "da we" : "konak";
	return 0;

}*/
/*int main() {
   /*Да се напише програма, която прочита цяло
   число N от стандартния вход и извежда първите N
   реда на триъгълника на Паскал, използвайки двумерен масив.
   int n;
   cin >> n;
   int arrRealSize = n + 1;
   //int arr[10][10];
   int ** arr = new int*[arrRealSize];
   for (int i = 0; i <arrRealSize; i++)
   {
	   arr[i] = new int[arrRealSize];
   }
   for (int i = 0; i < arrRealSize; i++)
   {
	   for (int j = 0; j < arrRealSize; j++)
	   {
		   arr[i][j] = 0;
	   }
   }
   arr[0][0] = 1;
   for (int i = 0; i < arrRealSize; i++)
   {
	   arr[i][0] = 1;
   }


   for (int i = 1; i < arrRealSize; i++)
   {
	   for (int k = 0 ; k < arrRealSize; k++)
	   {
		   if (i - 1 < 0 || k - 1 < 0) {
			   arr[i][k] = 1;
		   }
		   else {
			   arr[i][k] = arr[i - 1][k - 1] + arr[i - 1][k];
		   }
	   }
   }

   for (int i = 0; i <=n ; i++)
   {
	   for (int j = 0; j <=n; j++)
	   {
		   cout << arr[i][j] << ' ';
	   }
	   cout << endl;
   }

}
*/
//int main() {
//	char * str1 = "Bral Ivancho qbulki";
//	char * str2 = "Brala Ivanka Kupini po stepeni na 2kata";
//	char * temp;
//	temp = str1;
//	str1 = str2;
//	str2 = temp;
//	cout << str1 << endl;
//	cout << str2 << endl;
//	
//}

char toUpper(char c) {
	if (c >= 'a' && c <= 'z') {
		return c + 'A' - 'a';
	}
}
int main() {

	char* str = "ivancho qb ab    ";
	int StrSize = strlen(str) + 1;
	char split = ' ';
	int sizeP = 0;
	char** arr = new char*[10];
	int start = -1;
	int finish = -1;
	for (int i = 0; i < StrSize; i++)
	{
		if (str[i] != split && start == -1)
		{
			start = i;
		}
		if ((str[i] == split && start != -1 && finish == -1) || (i == StrSize - 1 && str[i] != split))
		{
			finish = i - 1;
		}
		if (start != -1 && finish != -1)
		{
			char* word = new char[finish - start + 2];
			for (int i = 0; i <= finish - start; i++)
			{
				word[i] = str[start + i];
			}
			word[finish - start + 1] = '\0';

			arr[sizeP] = word;
			sizeP++;
			//delete[] word;
			finish = -1; start = -1;
		}
	}
	for (int i = 0; i < sizeP; i++)
	{
		cout << arr[i] << endl;
	}
	// print with Capital each word
	for (int i = 0; i < sizeP; i++)
	{
		for (int j = 0; j < strlen(arr[i]); j++)
		{
			if (j == 0) {
				cout << toUpper(arr[i][j]);
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}


}