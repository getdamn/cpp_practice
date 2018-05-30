// ConsoleApplication7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
string encrypt(string str,int key)
{
	for(int idx = 0; idx < str.length(); idx++)
	{
		if (isupper(str[idx]))
			str[idx] = char(int('A')+(int(str[idx]) - int('A')+key) % 26);
		else
			str[idx] = char(int('a')+(int(str[idx]) - int('a')+key) % 26);
	}
	return str;
}
string decrypt(string str, int key)
{
	for (int idx = 0; idx < str.length(); idx++)
	{
		if (isupper(str[idx]))
			str[idx] = char(int('A') + (int(str[idx]) - int('A') - key + 26) % 26);
		else
			str[idx] = char(int('a') + (int(str[idx]) - int('a') - key + 26) % 26);
	}
	return str;
}
int main()
{
	string user_input;
	int key;
	cout << "encrypt 할 문장 입력 : ";
	cin >> user_input;
	cout << "key 입력(0~25): ";
	cin >> key;
	cout << encrypt(user_input, key)<<endl;
	cout << "decrypt 할 문장 입력 : ";
	cin >> user_input;
	cout << "key 입력(0~25): ";
	cin >> key;
	cout << decrypt(user_input, key)<<endl;
	
	return 0;
}

