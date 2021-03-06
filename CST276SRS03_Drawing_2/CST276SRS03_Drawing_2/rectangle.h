// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include "shape.h"

class Rectangle : public Shape
{
private:
	std::vector<Shape*> children_;
	int x1;
	int y1;
	int x2;
	int y2;

public:
	string ParamsToString()override;
	void Operation() override;
};

void Rectangle::Operation()
{
}

inline string Rectangle::ParamsToString()
{
	string str = "";
	for (auto g : children_)
	{
		str += (g->ParamsToString());
	}
	str += x1;
	str += y1;
	str += x2;
	str += y2;
	return  str;
}
