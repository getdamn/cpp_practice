// ConsoleApplication4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int num;
	int i, j;
	int s, e;
	while (1) 
	{
		cout << "숫자를 입력하세요";
		cin >> num;
		if (num == 0) 
		{
			break;
		}
		else if ((num >= 1) && (num <= 9)) 
		{
			for (i = 1; i < 10; i++) 
				cout << num << "*" << i << "=" << num * i << "\n";
		}
		else if ((num >= 10)&&(num <100)) 
		{
			s = (num / 10 == 0) ? 1 : num / 10;
			e = (num % 10 == 0) ? 1 : num % 10;
			if (s < e) 
			{
				for (i = s; i < e + 1; i++) 
				{
					for (j = 1; j < 10; j++)
						cout << i << "*" << j << "=" << i * j << "\n";
				}
			}
			else 
			{
				for (i = s; i > e - 1; i--) 
				{
					for (j = 1; j < 10; j++)
						cout << i << "*" << j << "=" << i * j << "\n";
				}
			}
		}
		else
			break;
	}
    return 0;
}

