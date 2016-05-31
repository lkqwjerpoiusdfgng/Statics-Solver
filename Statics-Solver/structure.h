#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "material.h"
#include <vector>
#include "support.h"

class structure 
{
	private:
		/* Private Functions */
		virtual bool setDimen(double, double);
		virtual bool calcArea();

		/* Private Variables */
		material mat;
		double width;
		double height;
		double area;
		double centroid[3];
		double origin[3];
		int totalForces;
		int totalUnknowns;
		std::vector<support *> supports;

	public: 

		/* Constructors */
		structure();
		structure(double, double, material);

		/* Destructor */
		~structure();

		/* Public Functions */
		double getArea();
		double getWidth();
		double getHeight();
		double* getCentroid();
		material getMaterial();
		double* getPosition();

		bool setWidth(double);
		bool setHeight(double);
		bool setPosition(double[]);

};

#endif