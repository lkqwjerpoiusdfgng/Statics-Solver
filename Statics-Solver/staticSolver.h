/***************************************
 * The purpose of the staticSolver class
 * is to lay the framework for solving
 * statics problems. It will obtain 
 * initial information from the user
 * regarding the problem to be solved
 * and orchestrate the creation and 
 * management of the necessary objects
 * to solve the problems.
 */


#ifndef STATICSOLVER_H
#define STATICSOLVER_H

#include <string>
#include <vector>
#include "structure.h"
#include "material.h"

class staticSolver {
	private:
		/* Private Variables */
		std::string unitSystem;
		int precision;
		int dimensions;
		double totalMass;
		double totalArea;
		double totalVolume;
		int totalForces;
		int totalUnknowns;
		double origin[3];
		double momentOfInertia;
		std::vector<structure *> itsStructures;
		std::vector<material *> materials;


		/* Private Functions */
		bool setPrecision(int);
		bool setOrigin(double[]);
		bool updateArea(double);
		bool updateMass(double);
		bool updateVolume(double);


	public:
		/* Constructors */
		staticSolver();
		staticSolver(std::string);
		staticSolver(int);
		staticSolver(std::string, int, int);

		/* Destructor */
		~staticSolver();

		/* Public Functions */
		double getMass();
		double getArea();
		double getVolume();
		double* getOrigin();
		int getPrecision();
};


#endif