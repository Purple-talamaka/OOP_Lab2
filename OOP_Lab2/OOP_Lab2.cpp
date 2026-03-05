#include <windows.h>
#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	cout << "Статическое создание Point" << endl;
	Point p1;
	Point p2(3.0, 4.0);
	Point p3(p2);

	cout << "\n Вызов методов Point" << endl;
	p1.print();
	p2.print();
	p2.move(1.0, 2.0);
	p2.print();

	cout << "\n Статическое создание Circle" << endl;
	Circle c1;
	Circle c2(1.0, 2.0, 5.0);
	Circle c3(c2);

	cout << "\n Вызов методов Circle" << endl;
	c1.print();
	c2.print();

	cout << "\n Динамическое создание" << endl;
	Point* p4 = new Point();
	Point* p5 = new Point(7.0, 8.0);
	Circle* c4 = new Circle(0.0, 0.0, 3.0);

	cout << "\n Вызов методов динамических объектов" << endl;
	p4->print();
	p5->print();
	c4->print();

	cout << "\n Удаление динамических объектов" << endl;
	delete p4;
	delete p5;
	delete c4;

	cout << "\n конец main" << endl;
	return 0;
}
