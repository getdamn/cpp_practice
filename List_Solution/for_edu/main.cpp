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

		// Ŀ�ǵ� ����
		if(command == 0) // ����
			return 0;
		else if (command == 1)
		{
			cout << endl << "�߰��� �� : ";
			cin >> temp1;
			insert(li, temp1);
			cout << endl << "���������� �߰��Ͽ����ϴ�." << endl;
		}
		else if (command == 2)
		{
			cout << endl << "�߰��� �� : ";
			cin >> temp1;
			cout << endl << "�߰��� ��ġ : ";
			cin >> temp2;
			if (insert_at(li, temp2, temp1))
				cout << endl << "���������� �߰��Ͽ����ϴ�." << endl;
			else
				cout << endl << "�߰��� �����Ͽ����ϴ�." << endl;
		}
		else if (command == 3)
		{
			cout << endl << "������ �� : ";
			cin >> temp1;
			if (remove(li, temp1))
				cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			else
				cout << endl << "������ �����Ͽ����ϴ�." << endl;
		}
		else if (command == 4)
		{
			cout << endl << "������ ��ġ : ";
			cin >> temp1;
			if (remove_at(li, temp1))
				cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			else
				cout << endl << "������ �����Ͽ����ϴ�." << endl;
		}
		else if (command == 5)
		{
			cout << endl;
			print_all(li);
			cout << endl << "��� ����Ͽ����ϴ�." << endl;
		}
		else
		{
			cout << endl << "�߸��� �Է�." << endl;
		}

		cout << endl << endl;
	}

	return 0;
}

// Ŀ�ǵ带 �޴� �Լ�.
int get_command()
{
	int command;

	// Menu ��� �� Ŀ�ǵ� �Է�
	cout << "(1) �� �ڿ� �߰�" << endl;
	cout << "(2) Ư�� ��ġ�� �߰�" << endl;
	cout << "(3) �˻��Ͽ� ����" << endl;
	cout << "(4) Ư�� ��ġ ����" << endl;
	cout << "(5) ��� ������ ���" << endl;
	cout << "---\n(0) ���α׷� ����" << endl;
	cout << "\n >> ";
	cin >> command;
	cout << endl;

	return command;
}