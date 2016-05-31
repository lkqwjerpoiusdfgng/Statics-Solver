#include "structure.h"
#include <string>

/* Global Constants */
static const std::string METRIC = "Metric";
static const std::string FPS = "Foot-Pound-Second";


/* Private Functions */

bool structure::setPrecision(int)
{
	return false;
}

bool structure::setOrigin(double[])
{
	return false;
}

bool structure::updateArea(double)
{
	return false;
}

bool structure::updateMass(double)
{
	return false;
}

bool structure::updateVolume(double)
{
	return false;
}

/* CONSTRUCTORS */
structure::structure()
{

}

structure::structure(std::string units)
{

}

structure::structure(int dimensions) 
{

}

structure::structure(std::string units = METRIC, int dimensions = 2, int precision = 2)
{

}

/* DESTRUCTOR */
structure::~structure()
{

}

/* Public Functions */

double structure::getMass()
{
	return 0.0;
}

double structure::getArea()
{
	return 0.0;
}

double structure::getVolume()
{
	return 0.0;
}

double * structure::getOrigin()
{
	return nullptr;
}

int structure::getPrecision()
{
	return 0;
}
