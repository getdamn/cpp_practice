#include <iostream>
#include <cmath>
using namespace std;
class Point {
	int x;
	int y;
public:
	Point();
	Point(int, int);

	void setPoint(const int, const int);
	int get_x();
	int get_y();

	Point operator-(Point);
	Point operator*(Point);
};
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
void Point::setPoint(const int x, const int y) {
	this->x = x;
	this->y = y;
}
int Point::get_x() {
	return x;
}
int Point::get_y() {
	return y;
}
Point Point::operator-(Point p) {
	Point res(this->x - p.x, this->y - p.y);
	return res;
}
Point Point::operator*(Point p) {
	Point res(this->x * p.x, this->y * p.y);
	return res;
}
bool clr_buf();
int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point *pP1, *pP2, *pP3;

	cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x1 >> y1;
	if (!clr_buf())	return 0;
	
	cout << "두번째 좌표[x2, y2]를 입력하세요 : ";
	cin >> x2 >> y2;
	if (!clr_buf())	return 0;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);

	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	cout << "두 좌표 사이의 길이는 " << sqrt((*pP3).get_x() + (*pP3).get_y()) << "입니다." << endl;
	return 0;
}
bool clr_buf()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		return 0;
	}
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	return 1;
}