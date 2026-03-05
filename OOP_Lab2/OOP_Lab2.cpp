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

	cout << "\n конец main" << endl;
	return 0;
}
