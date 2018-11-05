#include <iostream>
using namespace std;

class Train {
public:
	Train() {}
	Train(int people)
	{
		mPeople = people;
	}
	~Train() {}
	const int MAX_PEOPLE = 300;
protected:
	int mPeople;
};
class Ktx : public Train {
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people) {
		if (people < 0) {
			cout << "������ ����� Ż �� �����ϴ�" << endl;
			Train(0);
		}
	}
	~Ktx() {}
	
	int station(int takeOff, int TakeOn);
	int getPeople();
};
int Ktx::station(const int takeOff, const int TakeOn) {
	int AfterTakeOff, AfterTakeOn;
	if ((takeOff < 0) || (TakeOn < 0)) {
		cout << "������ ����� Ÿ�ų� ���� �� �����ϴ�" << endl;
		return 2;
	}
	AfterTakeOff = mPeople - takeOff;
	if (AfterTakeOff < 0) { //if under 0 person
		cout << "�����̴��Դϴ�" << endl;
		return -1;
	}
	else {
		AfterTakeOn = AfterTakeOff + TakeOn;
		if (AfterTakeOn > MAX_PEOPLE) { //if over Maximum
			cout << "�����ʰ��Դϴ�" << endl;
			return 1; 
		}
		else {
			mPeople = AfterTakeOn;
		}
	}
	return 0;
}
int Ktx::getPeople() {
	return mPeople;
}
int main()
{
	Ktx k;
	int TakeOff,TakeOn , max = 0;
	for (unsigned i = 0; i < 5; i++) {
		cout << i + 1 << "���� : ";
		cin >> TakeOff >> TakeOn;

		if ((i == 0) && (TakeOff != 0)) {
			cout << "1���������� ���� �� �����ϴ�" << endl;
			return 0;
		}
		if ((i == 4) && (TakeOn != 0)) {
			cout << "5���������� Ż�� �����ϴ�" << endl;
			return 0;
		}
		if (k.station(TakeOff, TakeOn)) { return 0; }
		if (k.getPeople() > max) {
			max = k.getPeople();
		}
	}
	cout << "���� ���� ����� ž�� ���� ���� ��� �� = " << max << endl;
	return 0;
}