// Hyperbola.h

#pragma once
#include "Curves.h"

class Hyperbola :
	public Curves
{
public:
	Hyperbola(double a, double b, double x);
	double count() const override;
};
