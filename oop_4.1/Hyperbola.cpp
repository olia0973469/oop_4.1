// Hyperbola.cpp

#include "Hyperbola.h"

double Hyperbola::count() const
{
	double y = - b * sqrt((x * x) / (a * a));
	return y;
}

Hyperbola::Hyperbola (double a, double b, double x) : Curves(a, b, x) {}
