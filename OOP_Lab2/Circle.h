#pragma once

#include <iostream>
#include "Point.h"

using namespace std;

class Circle : public Point {
private:
	double radius;

public:
	Circle() : Point(), radius(1) { cout << "Circle(): created, r=1" << endl; }

	Circle(double x, double y, double r) : Point(x, y), radius(r) { cout << "Circle(x,y,r): created, r=" << r << endl; }

	Circle(const Circle& other) : Point(other), radius(other.radius) { cout << "Circle(copy): created" << endl; }

	~Circle() { cout << "Circle: destroyed" << endl; }

	void print();
};