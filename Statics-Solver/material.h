#ifndef MATERIAL_H
#define MATERIAL_H

class material
{
private:
	/* Private Variables */
	  std::string name;		// Material Name
			double rho;		// Density
			  double E;		// Young's Modulus
			  double G;		// Shear Modulus

public:
	/* Constructors */
	material();
	~material();

	/* Public Functions */
	std::string getName();
	double getDensity();
	bool setName(std::string);
	bool setDensity(double);
};

#endif