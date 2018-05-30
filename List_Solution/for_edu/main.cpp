#include"LinkedList.h"

#include<Windows.h>
#include<iostream>
#include<conio.h>

using namespace std;

int get_command();

int main(void)
{
	int command, temp1, temp2;

	List li;

	while (true)
	{
		command = get_command();

		// 커맨드 실행
		if(command == 0) // 종료
			return 0;
		else if (command == 1)
		{
			cout << endl << "추가할 값 : ";
			cin >> temp1;
			insert(li, temp1);
			cout << endl << "성공적으로 추가하였습니다." << endl;
		}
		else if (command == 2)
		{
			cout << endl << "추가할 값 : ";
			cin >> temp1;
			cout << endl << "추가할 위치 : ";
			cin >> temp2;
			if (insert_at(li, temp2, temp1))
				cout << endl << "성공적으로 추가하였습니다." << endl;
			else
				cout << endl << "추가에 실패하였습니다." << endl;
		}
		else if (command == 3)
		{
			cout << endl << "삭제할 값 : ";
			cin >> temp1;
			if (remove(li, temp1))
				cout << endl << "성공적으로 삭제하였습니다." << endl;
			else
				cout << endl << "삭제에 실패하였습니다." << endl;
		}
		else if (command == 4)
		{
			cout << endl << "삭제할 위치 : ";
			cin >> temp1;
			if (remove_at(li, temp1))
				cout << endl << "성공적으로 삭제하였습니다." << endl;
			else
				cout << endl << "삭제에 실패하였습니다." << endl;
		}
		else if (command == 5)
		{
			cout << endl;
			print_all(li);
			cout << endl << "모두 출력하였습니다." << endl;
		}
		else
		{
			cout << endl << "잘못된 입력." << endl;
		}

		cout << endl << endl;
	}

	return 0;
}

// 커맨드를 받는 함수.
int get_command()
{
	int command;

	// Menu 출력 및 커맨드 입력
	cout << "(1) 맨 뒤에 추가" << endl;
	cout << "(2) 특정 위치에 추가" << endl;
	cout << "(3) 검색하여 삭제" << endl;
	cout << "(4) 특정 위치 삭제" << endl;
	cout << "(5) 모든 데이터 출력" << endl;
	cout << "---\n(0) 프로그램 종료" << endl;
	cout << "\n >> ";
	cin >> command;
	cout << endl;

	return command;
}