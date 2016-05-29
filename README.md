# Statics-Solver
**Current Status:** Nonfunctional

**Version:** 0.1

Statics Solver is a work-in-progress project intended as a foundation for future, more developed engineering education programs. 

### Overview
Statics Solver is a command-line (currently), Windows-based C++ program to solve typical problems from introductory engineering mechanics courses. The goal of this project is to develop extendable logic that can be implemented in engineering education software for assisting students in visualizing and solving problems. At completion, the project should be able to solve basic problems from statics & mechanics of materials courses.

#### Planned Features
**General**
* Solve for force/stress/strain/deformations in 2D & 3D problems
  * Beams
  * Trusses
  * Frames
  * Circular bars
  * Gears
* Support for statically indeterminate problems
* Support for custom distributed loading functions
* GUI for ease of use
* Graphical display of structures
* Output results
* Output structure to text file
* Load structure from text file

**Materials**
* Integrated database of material properties
  * Young's Modulus
  * Shear Modulus
  * Density
  * Coefficient of Thermal Expansion
* Support for temperature deformations
* Solve for internal forces at a point

**Design & Analysis**
* Support factor of safety
* Support force/moment constraints
* Integrate with GNUPLOT (or similar) to output
  * Graphs
  * Shear Diagrams
  * Moment Diagrams

### To-Dos
**Current**
- [ ] Build Core Programming (statics with point loads & simply-supported beams)
- [ ] Integrate more types of supports
- [ ] Integrate support for mixed unit types

**Future**
- [ ] Develop documentation
- [ ] Develop help function
- [ ] Develop built-in examples


### License
Read `LICENSE`
