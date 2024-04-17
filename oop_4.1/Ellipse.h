// Ellipse.h

#pragma once
#include "Curves.h"

class Ellipse :
	public Curves
{
public:
	Ellipse(double a, double b, double x);
	double count() const override;
};
