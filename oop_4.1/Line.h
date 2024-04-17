// Line.h

#pragma once
#include "Curves.h"

class Line:
	public Curves
{
public:
	Line(double a, double b, double x);
	double count() const override;
};
