// Ellipse.cpp

#include "Ellipse.h"

double Ellipse::count() const
{
	double y = b * sqrt((x * x) / (a * a));
	return y;
}

Ellipse::Ellipse(double a, double b, double x) : Curves(a, b, x) {}