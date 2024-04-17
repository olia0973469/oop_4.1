// Line.cpp

#include "Line.h"

double Line::count() const
{
	double y = a * x + b;
	return y;
}

Line::Line(double a, double b, double x) : Curves(a, b, x) {}
