#include "structure.h"

bool structure::setDimen(double, double)
{
	return false;
}

bool structure::calcArea()
{
	return false;
}

structure::structure()
{
}

structure::structure(double, double, material)
{
}

structure::~structure()
{
}

double structure::getArea()
{
	return 0.0;
}

double structure::getWidth()
{
	return 0.0;
}

double structure::getHeight()
{
	return 0.0;
}

material structure::getMaterial()
{
	return material();
}

double * structure::getPosition()
{
	return nullptr;
}

bool structure::setWidth(double)
{
	return false;
}

bool structure::setHeight(double)
{
	return false;
}
