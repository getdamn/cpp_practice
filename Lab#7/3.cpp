#include <iostream>
#include <string>
using namespace std;

int fibonacci(int);
void lowercase(string& plainText);
bool is_alphastr(const string& Text);
int main()
{
	int n;
	int *p;
	
	while (1) {
		string plainText = "";
		string cryptoText = "";
		cout << "input : ";
		cin >> plainText;

		if (!is_alphastr(plainText))
		{
			cout << "알파벳이 아닌 문자가 입력되었습니다." << endl;
			cout << "프로그램을 종료합니다." << endl;
			return 0;
		}

		lowercase(plainText);
		cout << "입력한 평문 : " << plainText << endl;
		for (unsigned i = 0; i < plainText.length(); i++) {
			cryptoText += ((plainText[i] - 'a') + fibonacci(i + 1)) % 26 + 'a';
		}

		cout <<"암호화된 문장 : "<< cryptoText << endl;
		cout << '\n';
	}
	string str = "ABCDE";
	lowercase(str);
	cout << str;
	return 0;
}
int fibonacci(int n)
{
	if (n == 1)return 0;
	if (n == 2)return 1;
	return fibonacci(n - 2) + fibonacci(n - 1);
}
void lowercase(string& plainText)
{
	//string(with only alphabets) - > lowercase string
	int diff = 'a' - 'A';
	for (unsigned i = 0; i < plainText.length(); i++)
	{
		if (plainText[i] <= 'Z')
			plainText[i] += diff;
	}
}
bool is_alphastr(const string& Text)
{
	for (unsigned i = 0; i < Text.length(); i++)
	{
		if (((Text[i] < 'A') || (Text[i] > 'Z')) && ((Text[i] < 'a') || (Text[i] > 'z')))
			return 0;
	}
	return 1;
}