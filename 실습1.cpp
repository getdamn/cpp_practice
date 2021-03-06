// ConsoleApplication4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<ctype.h>
#include<string>
#include<list>
using namespace std;
int count(std::string text, std::string target)
{
	int idx = 0;
	int start = 0, end = 0;
	int cnt = 0;
	while (1)
	{
		if ((isalpha(text[idx])) && !(isalpha(text[idx + 1]))) //apple___banana에서 현재 인덱스에서 e이고 다음 인덱스에서 ' '일때 끝점으로 지정. 스페이스바 여러번 나올때 고려 ~~ at? 같은 경우 고려.
		{
			end = idx;
			if ((text.substr(start, end - start + 1)) == target)//시작점에서 끝점 까지 문자열이 target과 같을때 cnt++
				cnt++;
		}
		else if (!(isalpha(text[idx])) && (isalpha(text[idx + 1]))) //현재 인덱스에서 ' '이고 다음 인덱스에서 b일때 시작점으로 지정
			start = idx + 1;
		if (text[idx + 1] == '\0')//마지막 인덱스일때 탈출 조건
			return cnt;
		idx++;
	}
} 
int sum_of_count(std::string text)
{
	return count(text, "at") + count(text, "to") + count(text, "from") + count(text, "on");
}
int main()
{
	std::string str = "Want to improve your Korean writing? Writing is an essential tool that will help you adjust to Korean university life. The Ha-Rang Writing Center offers a free tutoring program open to all international students at our university. We encourage you to take advantage of this. The program has always been very popular among international students. Registration opens from November 28 for three days only. Once you are registered, we will match you with a perfect tutor and contact you to arrange your schedule. We are sure that you will be satisfied with our well-experienced tutors. Don't miss this great opportunity to improve your Korean writing. For more information, feel free to email Jiyung Yoon, HRWC Director, at jyoon@hrwc.org.";
	cout << "sum_of_count:" << sum_of_count(str) << endl;
	return 0;
}

