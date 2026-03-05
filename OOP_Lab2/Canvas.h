#pragma once
#include "Circle.h"

class Canvas {
private:
	Circle circle;

public:
	Canvas() : circle() { cout << "Canvas(): created" << endl; }

	Canvas(double x, double y, double r) : circle(x, y, r) { cout << "Canvas(x,y,r): created" << endl; }

	~Canvas() { cout << "Canvas: destroyed" << endl; }

	void print() { circle.print(); }

};

class Canvas2 {
private:
	Circle* circle;

public:
	Canvas2() : circle(new Circle()) { cout << "Canvas2(): created" << endl; }

	Canvas2(double x, double y, double r) : circle(new Circle(x, y, r)) { cout << "Canvas2(x,y,r): created" << endl; }
	
	~Canvas2() { delete circle; cout << "Canvas2: destroyed" << endl; }

	void print() { circle->print(); }
};