// ConsoleApplication4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include<iostream>
#include<string>
#include<list>
using namespace std;
list<std::string> make_list(std::string text)
{
	int idx = 0;
	int start = 0, end = 0;
	list<std::string> res;
	while (1)
	{
		if ((text[idx] != ' ') && ((text[idx + 1] == ' ') || (text[idx + 1] == '\0')))
		{
			end = idx;
			res.push_back(text.substr(start, end - start + 1));
		}
		else if ((text[idx] == ' ') && (text[idx + 1] != ' '))
			start = idx + 1;
		if (text[idx + 1] == '\0')
			return res;
		idx++;
	}
}
int main()
{
	std::string str = "Want to improve your Korean writing? Writing is an essential tool that will help you adjust to Korean university life. The Ha-Rang Writing Center offers a free tutoring program open to all international students at our university. We encourage you to take advantage of this. The program has always been very popular among international students. Registration opens from November 28 for three days only. Once you are registered, we will match you with a perfect tutor and contact you to arrange your schedule. We are sure that you will be satisfied with our well-experienced tutors. Don't miss this great opportunity to improve your Korean writing. For more information, feel free to email Jiyung Yoon, HRWC Director, at jyoon@hrwc.org.";
	list<std::string> res_list = make_list(str);
	for (auto iter : res_list)
		cout << iter << "_";
	return 0;
}

