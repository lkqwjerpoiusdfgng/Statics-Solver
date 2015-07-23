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

class staticSolver {

	public:
		/* Constructors */
		staticSolver();
		staticSolver(std::string);

		/* Destructor */
		~staticSolver();
};


#endif