#ifndef MATERIAL_H
#define MATERIAL_H

class material
{
private:
	/* Private Variables */
	std::string name;
	double density;

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