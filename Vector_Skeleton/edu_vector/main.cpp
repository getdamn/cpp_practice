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

		// Ŀ�ǵ� ����
		if (command == 0) // ����
			return 0;
		else if (command == 1)
		{
			cout << endl << "�߰��� �� : ";
			cin >> temp1;
			push_back(vec, temp1);
			cout << endl << "���������� �߰��Ͽ����ϴ�." << endl;
		}
		else if (command == 2)
		{
			cout << endl;
			cout << "������ �� : " << pop_back(vec) << endl;
		}
		else if (command == 3)
		{
			cout << endl;
			print_all(vec);
			cout << endl << "��� ����Ͽ����ϴ�." << endl;
		}
		else
		{
			cout << endl << "�߸��� �Է�." << endl;
		}

		cout << endl << endl;
	}
}

int get_command()
{
	int command;

	// Menu ��� �� Ŀ�ǵ� �Է�
	cout << "(1) �� �ڿ� �߰�" << endl;
	cout << "(2) �� �� ����" << endl;
	cout << "(3) ��� ������ ���" << endl;
	cout << "---\n(0) ���α׷� ����" << endl;
	cout << "\n >> ";
	cin >> command;
	cout << endl;

	return command;
}