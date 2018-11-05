#include <iostream>
#include <string>
using namespace std;
class User {
	string id;
	string password;
public:
	string get_id() {
		return id;
	}
	string get_password() {
		return password;
	}
	void set_id(const string& input_id) {
		id = input_id;
	}
	void set_password(const string& input_password) {
		password = input_password;
	}
};
bool operator==(User& u1, User& u2) {
	if ((u1.get_id() == u2.get_id()) && (u1.get_password() == u2.get_password()))
		return 1;
	else 
		return 0;
}
bool User_dis(User list[], int len);
bool Chk_login(User list[], int len, const string& id, const string& pw);

int main()
{
	User user[3];
	string id = "", password = "";
	string searchId = "", searchPassword = "";

	for (int i = 0; i < 3; i++) {
		cout << "============ " << i + 1 << " ============" << endl;
		cout << "id : ";
		cin >> id;
		cout << "password : ";
		cin >> password;

		user[i].set_id(id);
		user[i].set_password(password);

		if (!User_dis(user, i + 1))
		{
			cout << "�̹� �����ϴ� ID�Դϴ�." << endl;
			cout << "�����մϴ�." << endl;
			return 0;
		}
	}

	int i = 0;
	while (1) {
		cout << "============ " << "LogIn" << " ============" << endl;
		cout << "Id : ";
		cin >> searchId;
		if (searchId == "����")
		{
			cout << "�����ϰڽ��ϴ�." << endl;
			return 1;
		}

		cout << "Password : ";
		cin >> searchPassword;
		
		if (Chk_login(user, 3, searchId, searchPassword))
			cout << "�α��� �Ǽ̽��ϴ�." << endl;
		else
			cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << endl;
	}
	return 0;
}
bool User_dis(User list[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (list[i].get_id() == list[j].get_id())return 0;
		}
	}
	return 1;
}
bool Chk_login(User list[], int len, const string& id, const string& pw)
{
	for (int i = 0; i < len; i++)
	{
		if (list[i].get_id() == id) {
			if (list[i].get_password() == pw)
				return 1;
			else
				return 0;
		}
	}
	return 0;
}