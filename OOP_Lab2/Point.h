#pragma once

#include <iostream>

using namespace std;

//базовый класс для представления точки на плоскости
class Point {
private:
	double x; //недоступно для наследников

protected:
	double y; //доступно для наследников

public:
	Point() : x(0), y(0) { cout << "Point(): created (0,0)" << endl; }

	Point(double a, double b) : x(a), y(b) { cout << "Point(a,b): created (" << a << "," << b << ")" << endl; }

	Point(const Point& other) : x(other.x), y(other.y) { cout << "Point(copy): created" << endl; }
 
	~Point() { cout << "Point: destroyed" << endl; }

	void print();

	void move(double dx, double dy) {
		x += dx; y += dy;
	}
};
