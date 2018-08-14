// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include "shape.h"
#include <string>
#include <iostream>
using std::ostream;
using std::string;

class Drawing
{
private:
	std::vector<Shape*> shapes_;
public:
	void AddShape(Shape* shape);
	void removeShape(Shape* shape);
	string ToString();
	friend ostream& operator<< (ostream& stream, const Drawing & except);
};


inline ostream & operator<<(ostream & stream, const Drawing & shape)
{
	for (auto s : shape.shapes_)
	{
		stream << s->ParamsToString();
	}
	return stream;
}