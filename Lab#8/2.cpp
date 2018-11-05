#include <iostream>
#include <cmath>
using namespace std;
const double PI = atan(1) * 4;
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
class Triangle : private Polygon {
public:
	Triangle() {};
	Triangle(int point, float length) : Polygon(point, length) {};
	~Triangle() {};

	void calcGirth() override;
	void calcArea() override;
};
void Triangle::calcGirth() {
	cout << "Girth : " << mLength * mPoint << endl;
}
void Triangle::calcArea() {
	cout << "Area : " << sqrt(3)/4*pow(mLength, 2) << endl;
}
class Circle : private Polygon {
public:
	Circle() {};
	Circle(int point, float length) : Polygon(point, length) {};
	~Circle() {};

	void calcGirth() override;
	void calcArea() override;
};
void Circle::calcGirth() {
	cout << "Girth : " << 2 * mLength * PI << endl;
}
void Circle::calcArea() {
	cout << "Area : " << pow(mLength,2) * PI << endl;
}
int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();
	

	return 0;
}