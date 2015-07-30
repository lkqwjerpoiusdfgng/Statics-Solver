#include "staticSolver.h"
#include <string>

/* Global Constants */
static const std::string METRIC = "Metric";
static const std::string FPS = "Foot-Pound-Second";


/* Private Functions */

bool staticSolver::setPrecision(int)
{
	return false;
}

bool staticSolver::setOrigin(double[])
{
	return false;
}

bool staticSolver::updateArea(double)
{
	return false;
}

bool staticSolver::updateMass(double)
{
	return false;
}

bool staticSolver::updateVolume(double)
{
	return false;
}

/* CONSTRUCTORS */
staticSolver::staticSolver()
{

}

staticSolver::staticSolver(std::string units)
{

}

staticSolver::staticSolver(int dimensions) 
{

}

staticSolver::staticSolver(std::string units = METRIC, int dimensions = 2, int precision = 2)
{

}

/* DESTRUCTOR */
staticSolver::~staticSolver()
{

}

/* Public Functions */

double staticSolver::getMass()
{
	return 0.0;
}

double staticSolver::getArea()
{
	return 0.0;
}

double staticSolver::getVolume()
{
	return 0.0;
}

double * staticSolver::getOrigin()
{
	return nullptr;
}

int staticSolver::getPrecision()
{
	return 0;
}
