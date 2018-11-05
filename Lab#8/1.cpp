#include <iostream>
#include <cmath>
using namespace std;
class Polygon {
public:
	Polygon();
	Polygon(int point, float length);
	~Polygon();

	virtual void calcGirth();
	virtual void calcArea();
protected:
	int mPoint;
	double mLength;
};
Polygon::Polygon() {}
Polygon::Polygon(int point, float length) {
	mPoint = point;
	mLength = length;
}
Polygon::~Polygon() {}
void Polygon::calcGirth() {
	cout << "Girth : empty" << endl;
}
void Polygon::calcArea() {
	cout << "Area : empty" << endl;
}
class Rectangle : private Polygon {
public:
	Rectangle() {};
	Rectangle(int point, float length) : Polygon(point, length) {};
	~Rectangle() {};

	void calcGirth() override;
	void calcArea() override;
};
void Rectangle::calcGirth() {
	cout << "Girth : " << mLength * mPoint << endl;
}
void Rectangle::calcArea() {
	cout << "Area : " << mLength * mLength << endl;
}
int main()
{
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();

	return 0;
}