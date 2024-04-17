// Curves.h

#pragma once
#include <math.h>
#include <corecrt_math_defines.h>


class Curves
{
protected:
	double x;
	double a;
	double b;
public:

	Curves(double a, double b, double x) : a(a), b(b), x(x) {}
	double getX() const { return x; };
	void setX(double x);
	virtual double count() const = 0;
	virtual ~Curves() {}
};
