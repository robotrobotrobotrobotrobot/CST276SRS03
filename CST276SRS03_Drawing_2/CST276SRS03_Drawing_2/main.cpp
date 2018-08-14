// GOF composite Pattern
// GOF Factory Pattern
#include <fstream>
#include <iostream>
#include "shapebuilder.h"
#include "drawing.h"

using std::ofstream;
using std::ifstream;

int main()
{
	Circle c;
	c.setCenterX(2);
	c.setCenterY(4);
	c.setRadius(5);
	Drawing drawing;
	drawing.AddShape(&c);
	ofstream myfile;
	myfile.open("drawingsave.txt");
	myfile << drawing;
	myfile.close();
	ShapeBuilerFunc(ShapeFactory::line);
	ShapeBuilerFunc(ShapeFactory::circle);
	ShapeBuilerFunc(ShapeFactory::rectangle);
	ShapeBuilerFunc(ShapeFactory::polygon);
	ShapeBuilerFunc(ShapeFactory::compositeshape);
}