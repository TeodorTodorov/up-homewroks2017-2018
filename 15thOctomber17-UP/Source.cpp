#include<iostream>
#include<string>

using namespace std;


 ///TODO : rorate all words in text
void rotate(char* a) {
	
	char* b = new char [strlen(a)];
	strcpy(b, a);
	//cout << a;
	for (int i = 1; i < strlen(a); i++)
	{
		a[i] = b[i - 1];
	}
	a[0] = b[strlen(b) - 1];
	

}
void rotate(char* a, int rotCount) {

	for (int i = 0; i < rotCount; i++)
	{
		rotate(a);
	}
}

bool isLetter(char c) {
	return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ) || c == '-' /*|| (c >='1' && c<='9')|| c=='-'*/;
}
int main() {

	int rotCount = 2;
	//char a[7] = "pe60";
	//rotate(a, rotCount);
	//cout << a;
	



	char str[2048] = "baba pesho 6 ";
	int i = 0, count = 0;
	int start = -1;
	int finish = -1;
	bool inWord = false;
	while (str[i] != '\0') {
		if (inWord && !isLetter(str[i])) {
			inWord = false;
			if (start != -1)
			{
				finish = i - 1;
			}
			if (start != -1 && finish != -1)
			{
				char* zf = new char[finish - start + 2];
				for (int i = 0; i <= finish; i++)
				{
					zf[i] = str[start + i];
				}
				zf[finish - start + 1] = '\0';
				cout << zf << " :first marker" << endl;

				rotate(zf, rotCount);
				cout << zf << endl;
				start = -1, finish = -1;
			}
		}
		else if (!inWord && isLetter(str[i])) {


			if (start == -1)
			{
				start = i;
			}
			inWord = true;
			++count;
		}
		++i;
		if (i == strlen(str)) {
			if (start != -1)
			{
				finish = i - 1;
			}
			if (start != -1 && finish != -1)
			{
				char* zf = new char[finish - start + 2];
				for (int i = 0; i <= finish; i++)
				{
					zf[i] = str[start + i];
				}
				zf[finish - start + 1] = '\0';
				cout << zf << " :first marker" << endl;

				rotate(zf, rotCount);
				cout << zf << endl;
				start = -1, finish = -1;
			}
		}
	}



	/*char str[2048];
	cin.getline(str, 2048 );
	int count = 0;
	int stateSym = false;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ' && ( (str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] >= 'Z'))) {
			count++;
		
			while (str[i] != ' ')
			{
				i++;
			}
		}
	}

	cout << count<< endl;
	cout << str<<endl;*/
	return 0;
}