#pragma once
#include "Library.h"
#include "Circle.h"
#include "Square.h"

class Circle_in_Square :public Circle, public Square {
private:
	double x, y;
public:
	Circle_in_Square();
	Circle_in_Square(double,double,double,double);

	friend istream& operator >> (istream&, Circle_in_Square&);
	friend ostream& operator << (ostream&, Circle_in_Square&);
};
