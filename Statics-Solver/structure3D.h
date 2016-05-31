#ifndef STRUCTURE3D_H
#define STRUCTURE3D_H

#include "structure.h"

class structure3D :
	public structure
{
private:
	/* Private Variables */
	double length;
	double volume;

	/* Private Functions */
	bool setDimen(double, double, double);
	bool calcArea();
	

public:
	/* Constructors */
	structure3D();
	structure3D(double, double, double);
	
	/* Destructor*/
	~structure3D();

	/* Public Functions */
	double getArea();
};

#endif