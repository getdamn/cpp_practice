#include"Vector.h"

#include<Windows.h>
#include<iostream>

using namespace std;

int get_command();

int main(void)
{
	int command, temp1;
	Vector vec;
	make_vector(vec);

	while (true)
	{
		command = get_command();

		// 커맨드 실행
		if (command == 0) // 종료
			return 0;
		else if (command == 1)
		{
			cout << endl << "추가할 값 : ";
			cin >> temp1;
			push_back(vec, temp1);
			cout << endl << "성공적으로 추가하였습니다." << endl;
		}
		else if (command == 2)
		{
			cout << endl;
			cout << "삭제된 값 : " << pop_back(vec) << endl;
		}
		else if (command == 3)
		{
			cout << endl;
			print_all(vec);
			cout << endl << "모두 출력하였습니다." << endl;
		}
		else
		{
			cout << endl << "잘못된 입력." << endl;
		}

		cout << endl << endl;
	}
}

int get_command()
{
	int command;

	// Menu 출력 및 커맨드 입력
	cout << "(1) 맨 뒤에 추가" << endl;
	cout << "(2) 맨 뒤 삭제" << endl;
	cout << "(3) 모든 데이터 출력" << endl;
	cout << "---\n(0) 프로그램 종료" << endl;
	cout << "\n >> ";
	cin >> command;
	cout << endl;

	return command;
}