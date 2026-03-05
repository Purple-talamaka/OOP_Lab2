#pragma once
#include "Circle.h"

// Композиция - класс Canvas содержит объект Circle как прямой оюъект
class Canvas {
private:
	Circle circle; // уничтожается автоматически при уничтожении Canvas

public:
	Canvas() : circle() { cout << "Canvas(): created" << endl; }

	Canvas(double x, double y, double r) : circle(x, y, r) { cout << "Canvas(x,y,r): created" << endl; }

	~Canvas() { cout << "Canvas: destroyed" << endl; }

	void print() { circle.print(); }

};

//Композиция - класс Canvas2 содержит указатель на объект Circle
class Canvas2 {
private:
	Circle* circle; // создается динамически, нужно удалять вручную в деструкторе

public:
	Canvas2() : circle(new Circle()) { cout << "Canvas2(): created" << endl; }

	Canvas2(double x, double y, double r) : circle(new Circle(x, y, r)) { cout << "Canvas2(x,y,r): created" << endl; }
	
	~Canvas2() { delete circle; cout << "Canvas2: destroyed" << endl; }

	void print() { circle->print(); }
};